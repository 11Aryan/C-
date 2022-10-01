#include<iostream>
using namespace std;
int bs(int arr[],int s,int e,int key)
{
	int m=s+(e-s)/2;
	if(s>e)
		return -1;
	if(arr[m]==key)
		return m;
	if(arr[m]>key)
	{
		e=m-1;
		bs(arr,s,e,key);
	}
	else
	{
		s=m+1;
		bs(arr,s,e,key);
	}
}
int main()
{
    int arr[5]={2,4,5,6,7};
    int key =18;
    int ans=bs(arr,0,4,key);
    cout<<ans;
}
