#include<iostream>
using namespace std;
/*int power(int n)
{
    if(n==0)
     return 1;
    return (2*power(n-1)); 
}*/
void print(int n)
{  
    if(n==0)
    {
        return;
    }
   cout<<n<<endl;
   
    print(n-1);
}
int main()
{  cout<<"Enter n";
    int n,ans;
    cin>>n;
    //ans=power(n);
    //cout<<ans;
    print(n);
}