#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    int a=0,b=1;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<n-1;i++)
    {   
        s=a+b;
        cout<<s<<" ";
        a=b;b=s;
    
     }
}