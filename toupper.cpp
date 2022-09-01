#include<iostream>
using namespace std;
int length(char a[])
{ int count=0;
    for(int i=0;a[i]!='\0';i++)
     {count++;}
   return count; 
}
void toupper(char a[],int n)
{  for(int i=0;a[i]!='\0';i++)
     if(a[i]>='a'&& a[i]<='z')
        {   a[i]=a[i]-'a'+'A';
            
            }
        else {
             a[i];
        }
     
}
int main()
{
    char ch[10];
    cin>>ch;
    int l=length(ch);
    cout<<"Length="<<l<<endl;

    toupper(ch,l);
    cout<<ch;
}