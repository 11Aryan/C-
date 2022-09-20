#include<iostream>
using namespace std;
int firstocc(int array[],int size,int key)
{int start=0,ans=-1;
int end=size-1;
int mid=start+(end-start)/2;
while(start<=end)
{ 
    if(array[mid]==key)
    {ans=mid;
     end=mid-1;}

    if(array[mid]<key)
      { start=mid+1;}
    else{end=mid-1;}  

    mid=start+(end-start)/2;}
    return ans;
}

int lastocc(int array[],int size,int key)
{int start=0,ans=-1;
int end=size-1;
int mid=start+(end-start)/2;
while(start<=end)
{ 
    if(array[mid]==key)
    {ans=mid;
     start=mid+1;}

    else if(array[mid]<key)
      { start=mid+1;}
    
    else{end=mid-1;}  

    mid=start+(end-start)/2;

}
 return ans;
}
int main()
{
    int a[5]={1,2,5,5,5};
    int index=firstocc(a,5,5);
    int index2=lastocc(a,5,5);
    cout<<"First Occ."<<index<<endl;
    cout<<"Last Occ."<<index2;
}