#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int dp[61];
	while(t--)
	{
		int n;
		cin>>n;
		int h=1;
		
		dp[0]=1;
		dp[1]=2;
		for(int i=2;i<n+1;i++)
		{
			if(i%2==0)
			{
				dp[i]=dp[i-2]*2+1;
			}
			else
			{
				dp[i]=dp[i-1]*2;
			}
		}
		// for(int i=0;i<n+1;i++)
		// {
		// 	cout<<dp[i]<<" ";
		// }
		// cout<<endl;
		cout<<dp[n]<<endl;
	}

}