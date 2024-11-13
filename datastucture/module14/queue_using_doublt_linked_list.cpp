#include<bits/stdc++.h>

using namespace std;


class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;

    }
};
class myQueue
{
    public:
    Node* head =NULL;
    Node* tail = NULL;
    void push(int val)
    {
        Node* newNode = new Node(val);
        if (head == NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        
        newNode->prev =tail;
        tail =tail->next;
    }
    void pop()
    {
        sz--;
        Node* deleteNode =head;
        head=head->next;
        if(head==NULL)
        {
            tail=NULL;
            delete deleteNode;
            return;
        }
        head->prev= NULL;
        delete deleteNode;

    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        
    }
};
int main()
{

    return 0;
}