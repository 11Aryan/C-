#include<iostream>
using namespace std;
void reverse(int a[], int size)
{ 
    int start=0,end=size-1;
    while(start<=end)
    { 
        swap(a[start],a[end]);
        start++;end--;
    }
}
void printarray(int a[], int size)
{
    for(int i=0;i<size;i++)
    {cout<<a[i]<<" ";}
}
int main()
{   int array[9]={1,2,3,4,5,6,7,8,9};
    reverse(array,9);
    printarray(array,9);

}