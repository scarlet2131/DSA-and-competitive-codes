#include<bits/stdc++.h>
using namespace std;
int candy(vector<int> &a)
{
	int n = a.size();
    int candy[n];
    candy[0] = 1;
    // for going upwards
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
            candy[i] = candy[i-1]+1;
        else candy[i] = 1;
    }
    // now go downwards to correct the trend
    for(int i=n-1;i>0;i--)
    {
        // if rank is greater but candies are smaller then correct it
        if(a[i-1]>a[i] && candy[i-1]<=candy[i])
            candy[i-1] = candy[i]+1;
    }
    int sum = 0;
    for(int i=0;i<n;i++)
        sum += candy[i];
    return sum;
}
int main()
{
	
		int n;
		cin>>n;
		vector<int> a;
		for(int i=0;i<n;i++ )
		{
			int x;
			cin>>x;
			a.push_back(x);
		}
		cout<<candy(a)<<endl;
	
}