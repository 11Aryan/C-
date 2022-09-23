// C++ program to print largest contiguous array sum
#include<iostream>
#include<climits>
using namespace std;
void findMaxSubArrayIndex(int a[],int n){          
        //int n,*a;
        int start=0,end=0,curr_max=0,prev_max=0,start_o=0,i;

       // scanf("%d",&n);
      //  a = (int*)malloc(sizeof(int)*n);
      //  for(i=0; i<n; i++)  scanf("%d",a+i);

        prev_max = a[0];

        for(i=0; i<n; i++){
            curr_max += a[i];
            if(curr_max < 0){
                start = i+1;
                curr_max = 0;
            }
            else if(curr_max > prev_max){
                end = i;
                start_o = start;
                prev_max = curr_max;
            }

        }

        cout<<start_o<<" "<<end; 
}
int maxSubArraySum(int a[], int size)
{
	int max_so_far = INT_MIN, max_ending_here = 0;

	for (int i = 0; i < size; i++)
	{
		max_ending_here = max_ending_here + a[i];
		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;

		if (max_ending_here < 0)
			max_ending_here = 0;
	}
	return max_so_far;
}

/*Driver program to test maxSubArraySum*/
int main()
{
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(a)/sizeof(a[0]);
	int max_sum = maxSubArraySum(a, n);
    findMaxSubArrayIndex(a,n);
    cout<<endl;
	cout << "Maximum contiguous sum is " << max_sum;
	return 0;
}
