#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
    ~Node()
    {
        if(next!=NULL)
        {   
            delete next;
            next=NULL;
        }
    }

};
void insertNode(Node*&tail,int element,int d)
{
         if(tail==NULL)
         {
            Node* newNode=new Node(d);
            tail=newNode;
            newNode->next=newNode;
         }
         else
         {
            Node*cur=tail;
            while(cur->data!=element)
            {
                cur=cur->next;
            }

         
         Node*temp=new Node(d);
         temp->next=cur->next;
         cur->next=temp;
         
         }

}

void print(Node*tail)
{
    Node*temp=tail;
    do
    {  
        cout<<tail->data<<" ";
        tail=tail->next;
        /* code */
    } while (tail!=temp);
    cout<<endl;
    
}
int main()
{
    Node*tail=NULL;
    insertNode(tail,5,1);
    print(tail);
    insertNode(tail,1,8);
    print(tail);
    insertNode(tail,1,10);
    print(tail);
}