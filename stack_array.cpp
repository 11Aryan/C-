#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int n;
    int top;
Stack(int size)
{
    n=size;
    arr=new int[n];
    top=-1;
}

    void push(int d)
    {    
        if(n-top>1)
        {
            top++;
            arr[top]=d;
        }
       
        else
        {  
         cout<<"Stack Overflow"<<endl;
        }
    
    }
    void pop()
    {
        if(top==-1)
          cout<<"Stack Underflow"<<endl;
        else
        {
            top--;
        }  
    }
    void peek()
    {
        if(top==-1)
          cout<<"Stack Empty"<<endl;
        else
          cout<<"Top Element:"<<arr[top]<<endl; 
    }

    bool isempty()
    {
        if(top==-1)
          return true;
        else 
          return false;  
    }

};
int main()
{
    Stack s(5);
    s.push(1);
    s.push(3);
    s.push(5);
    s.peek();
    s.pop();
    s.pop();
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    if(s.isempty())
    { cout<<"STack is empty"<<endl;}
    else
    {cout<<"Stack is not empty"<<endl;}
    s.push(1);
    s.push(3);
    s.push(5);
    s.push(1);
    s.push(3);
    s.push(5);
}