/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void insert_tail(ListNode*& head, ListNode*& tail, int val) {
        ListNode* newNode = new ListNode(val);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = tail->next;
        }
    }

    void print_list(ListNode* head) {
        ListNode* tmp = head;
        while (tmp != nullptr) {
            cout << tmp->val << " ";
            tmp = tmp->next;
        }
        cout << endl;
    }

    void reverse(ListNode*& head) {
        ListNode* prev = nullptr;
        ListNode* current = head;
        while (current != nullptr) {
            ListNode* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* newHead = nullptr;
        ListNode* newTail = nullptr;
        ListNode* tmp = head;
        
        while (tmp != nullptr) {
            insert_tail(newHead, newTail, tmp->val);
            tmp = tmp->next;
        }

        reverse(newHead);
        tmp = head;
        ListNode* tmp2 = newHead;

        while (tmp != nullptr) {
            if (tmp->val != tmp2->val) {
                return false;
            }
            tmp = tmp->next;
            tmp2 = tmp2->next;
        }
        return true;
    }
};
