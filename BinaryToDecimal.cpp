#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,d,i=0,sum=0;
    cin>>n;
    while(n)
    { d=n%10;
      if(d==1)
      { sum=sum+pow(2,i);}
      n=n/10;i++;
    }
    cout<<sum;
}