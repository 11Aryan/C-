#include<iostream>
using namespace std;
class Node
{
 public:
 int data;
 Node *next;
 Node* prev;
 Node(int d)
 {
    this->data=d;
    this->next=NULL;
    this->prev=NULL;
 }
 ~Node()
{ if(this->next !=NULL)
     {  
        delete next;
        this->next=NULL;

     }
}
};

 void insertHead(Node*&head,Node*&tail,int d)
 {  if(head==NULL)
    {
      Node*temp=new Node(d);
      head=temp; 
      tail=temp;
    }
    else{
    Node*temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }

 }

 void insertTail(Node*&head,Node*&tail,int d)
 {  if(tail==NULL)
    {
      Node*temp=new Node(d);
      tail=temp;
      head=temp; 
    }
    else{
    Node*temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }

 }

 void insertPosition(Node*&head,Node*&tail,int position,int d)
 {
     Node*temp=head;
     int count=1;
     if(position==1)
     {
      insertHead(head,tail,d);
      return;
     }
     while(count<position-1)
     {
      temp=temp->next;
      count++;
     }
     if(temp->next==NULL)
     {
      insertTail(head,tail,d);
      return;
     }
     Node*element=new Node(d);
     element->next=temp->next;
   //temp->next->prev=element;
     element->prev=temp;
     temp->next=element; 
    

 }

void deleteNode(Node *&head,Node*&tail,int position)
   {   
    if(position==1)
    {
        Node* temp=head; 
        temp->next->prev=NULL;
        head=temp->next;;
        temp->next=NULL;
        delete temp;
    }
    else
    {   Node*cur=head;
        Node*prev=NULL;
        int count=1;
        while(count<position)
        {
            prev=cur;
            cur=cur->next;
            count++;
        }
        prev->next=cur->next;
        cur->prev=NULL;
        cur->next=NULL;
        delete cur;
    }
      
   }

 void print(Node*&head)
 {
    Node*temp=head;
    while(temp!=NULL)
    {cout<<temp->data<<" ";
    temp=temp->next;}
    cout<<endl;
 }
 int main()
 {
    //Node*node1=new Node(10);
    Node*head=NULL;
    Node*tail=NULL;
    insertHead(head,tail,20);
    insertTail(head,tail,100);
    insertPosition(head,tail,3,30);
    insertPosition(head,tail,4,2);
    print(head);
    deleteNode(head,tail,4);
    print(head);
    cout<<"Head-"<<head->data<<endl<<"Tail-"<<tail->data;
 }