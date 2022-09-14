#include<iostream>
using namespace std;
int length(char a[])
{ int count=0;
    for(int i=0;a[i]!='\0';i++)
     {count++;}
   return count; 
}
char tolower(char ch)
{
     if(ch>='a'&& ch<='z')
        {   return ch;
            }
        else {
            char temp=ch-'A'+'a';
            return temp;
        }
     
}
/*void reverse(char a[],int n)
{
    int s=0,e=n-1;
    while(s<e)
    {
        swap(a[s++],a[e--]);
    }
}*/

int palindrome(char a[],int n)
{
    int s=0,e=n-1;
    while(s<=e){
    if(tolower(a[s])!=tolower(a[e]))
    { return 0;}
    else
    { s++;e--;}
    return 1;}
}

int main()
{
    char ch[10];
    cin>>ch;
    int l=length(ch);
    cout<<"Length="<<l<<endl;

    cout<<tolower('B');
    
    //reverse(ch,l);
    //cout<<"Reverse="<<ch<<endl;
   // cout<<"Palindrome="<<palindrome(ch,l);
}