#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll k=n-1;
		ll u,v;
		ll count[n+1]={0};
		while(k--)
		{
			cin>>u>>v;
			count[u]++;
			count[v]++;
		}
		// for(ll i=0;i<=n;i++)
		// {
		// 	cout<<count[i]<<" ";
		// }

		// cout<<endl;
		ll deg[n];
		for(ll i=0;i<n;i++)
		{
			cin>>deg[i];
			// cout<<deg[i]<<" ";
		}
		// cout<<endl;

		ll c=0;
		for(ll i=0;i<n;i++)
		{
			if(count[i+1]>1 && deg[i]!=0)
			{
				// cout<<i<<" "<<deg[i];
				c++;
			}
		}
		cout<<c<<endl;
	}
}