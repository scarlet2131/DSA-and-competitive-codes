#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int dp[n]={0};
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			dp[i]=-1;
		}
	}
	
	dp[0]=0;
	if(dp[1]!=-1)
	{
		dp[1]=1;
	}
	// for(int i=0;i<n;i++)
	// {
	// 	cout<<dp[i]<<" ";
	// }
	// cout<<endl;
	for(int i=2;i<n;i++)
	{
		if(dp[i]!=-1)
		{
			if(dp[i-1]!=-1 and dp[i-2]!=-1)
				dp[i]=min(dp[i-1],dp[i-2])+1;
			else if(dp[i-1]==-1 and dp[i-2]!=-1)
				dp[i]=dp[i-2]+1;
			else if(dp[i-2]==-1 and dp[i-1]!=-1)
				dp[i]=dp[i-1]+1;
			else
				dp[i]=0;
		}
		
	}
	// for(int i=0;i<n;i++)
	// {
	// 	cout<<dp[i]<<" ";
	// }
	// cout<<endl;
	cout<<dp[n-1]<<endl;

}