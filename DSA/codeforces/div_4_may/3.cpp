#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int a[n][m+1];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m+1;j++)
		{
			cin>>a[i][j];
		}
	}
	map<int,int> g;
	int sum2[n]={0};
	int sum[n]={0};
	for(int i=0;i<n;i++)
	{
		int x=0;
		for(int j=1;j<m+1;j++)
		{
			x+=a[i][j];
		}
		g[x]=i;
		sum[i]=x;
	}
	int ans=0;
	int f=0,c=0;
	for(int i=1;i<m+1;i++)
	{
		int x=0;
		for(int j=0;j<n;j++)
		{
			x+=a[j][i];
		}
		sum2[c++]=x;
	}
	for(int i=0;i<n;i++)
	{
		// cout<<sum[i]<<" ";
		if(sum2[i]<k)
			f=1;
	}
	// cout<<endl;
	sort(sum,sum+n);
	if(f==1)
	{
		ans =-1;
	}
	
	else{
		ans=0;
		int x=0;
		int final[n]={0};
		while(x<n)
		{
			int s= sum[n-x-1];
			// cout<<"s  to choose "<<s<<endl;
			auto it=g.find(s);
			// cout<<"row to choose "<<it->second<<endl;
			int temp=0;
			for(int i=1;i<m+1;i++)
			{
				final[i-1]+=a[it->second][i];
			}
			for(int i=0;i<m;i++)
			{
				cout<<final[i]<<" ";
			}
			cout<<endl;
			ans+=a[it->second][0];
			int d=0;
			for(int i=0;i<n;i++)
			{
				if(final[i]>=k)
				{
					d++;
				}
			}
			if(d==n)
				break;
			x++;
		}

	}
	cout<<ans<<endl;
	
	
}