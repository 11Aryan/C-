#include<iostream>
using namespace std;
int bubblesort(int arr[],int n)
{   
    for(int i=1;i<n;i++)
    {  bool a=true;
        
        for(int j=0;j<n-i;j++)
        {
          if(arr[j]>arr[j+1])
            { a=false;
              swap(arr[j+1],arr[j]);}
        }    
        if(a==true)
         break;
    }
}
int print(int arr[],int n)
{   for(int i =0;i<n;i++)
     cout<<arr[i]<<" ";
}
int main()
{ int a[10]={23,0,2,45,67,1,-12,3,0,10};
  bubblesort(a,10);
  print(a,10);
}