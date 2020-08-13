#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int M=100001;
	vector<vector<int> > adj(M);
	
	adj[0].push_back(0);
	for(int i=1;i<M;i++)
	{
		int c=i;
		std::vector<int> temp;
		while(c<M)
		{
			c=c+i;
			adj[i].push_back(c);
			
		}
		
	}
	// for(int i=0;i<10;i++)
	// {
	// 	for(int j=0;j<10;j++)
	// 	{
	// 		cout<<adj[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int dp[n+1];
		for(int i=0;i<n+1;i++)
		{
			dp[i]=1;
		}
		
		dp[0]=1;
		dp[1]=1;
		for(int i=0;i<n;i++)
		{
			vector<int> temp=adj[i+1];
			// for(int j=0;j<10;j++)
			// {
			// 	cout<<temp[j]<<" ";
			// }
			// cout<<endl;
			for(int j=0;j<temp.size();j++)
			{

				if(temp[j]-1<n and a[temp[j]-1]>a[i])
				{
					// cout << temp[j] << " ";
					dp[temp[j]]=max(dp[temp[j]],dp[i+1]+1);
				}
			}
			// cout << endl;

		}
		// for(int i=1;i<n+1;i++)
		// {
		// 	cout<<dp[i]<<" ";

		// }
		// cout<<endl;

		int ans=*max_element(dp,dp+n+1);
		cout<<ans<<'\n';


		

	}
}