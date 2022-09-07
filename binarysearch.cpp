#include<iostream>
using namespace std;
int binarysearch(int array[],int size,int key)
{int start=0;
int end=size-1;
int mid=start+(end-start)/2;
while(start<=end)
{ 
    if(array[mid]==key)
    {return mid;}

    if(array[mid]<key)
      { start=mid+1;}
    else{end=mid-1;}  

    mid=start+(end-start)/2;

}
 return -1;
}
int main()
{
    int a[5]={1,2,3,4,5};
    int index=binarysearch(a,5,5);
    cout<<"INDEX="<<index;
}
