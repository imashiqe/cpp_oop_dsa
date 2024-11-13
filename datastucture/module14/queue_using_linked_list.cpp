#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
class myQueue
{
    public:
     Node* head = NULL;
     Node* tail = NULL;
    void push(int val)
    {
        Node* newNode = new Node(val);
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
      Node* deleteNode =head;
      head=head->next;
      delete deleteNode;
      if(head == NULL)
      {
        tail=NULL;
      }  
    }

    
};

int main()
{   
    
    myQueue q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    
    return 0;
}