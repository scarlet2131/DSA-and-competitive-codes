#include <bits/stdc++.h>
using namespace std;
int maxSubArraySum(int a[], int size) 
{ 
int max_so_far = 0, max_ending_here = 0; 
for (int i = 0; i < size; i++) 
{ 
	max_ending_here = max_ending_here + a[i]; 
	if (max_ending_here < 0) 
		max_ending_here = 0; 
 
	/* Do not compare for all elements. Compare only 
		when max_ending_here > 0 */
	else if (max_so_far < max_ending_here) 
		max_so_far = max_ending_here; 
} 
return max_so_far; 
} 
int subArraySum(int arr[], int n, int sum) 
{ 
    /* Initialize curr_sum as value of  
    first element and starting point as 0 */
    int curr_sum = arr[0], start = 0, i; 
 
    /* Add elements one by one to curr_sum and  
    if the curr_sum exceeds the sum, 
    then remove starting element */
    for (i = 1; i <= n; i++) { 
        // If curr_sum exceeds the sum, 
        // then remove the starting elements 
        while (curr_sum > sum && start < i - 1) { 
            curr_sum = curr_sum - arr[start]; 
            start++; 
        } 
 
        // If curr_sum becomes equal to sum, 
        // then return true 
        if (curr_sum == sum) { 
            return i-start; 
        } 
 
        // Add this element to curr_sum 
        if (i < n) 
            curr_sum = curr_sum + arr[i]; 
    } 
 
    // If we reach here, then no subarray 
    return 0; 
} 
 
int main() {
		ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int tt;
	cin>>tt;
	for(int ii=0;ii<tt;ii++)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		int c=0;
		int m=INT_MIN;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int ma=maxSubArraySum(a,n);
		for(int i=0;i*x<=ma;i++)
		{
			int sum=i*x;
			c=subArraySum(a,n,sum);
				m=max(m,c);
		}
		if(m==0)
		cout<<"-1"<<endl;
		else 
		cout<<m<<endl;
	}
}