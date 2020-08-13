#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m,q;
	cin>>n>>m>>q;
	ll a[n]={0};
	ll b[m]={0};
	ll x,y;
	for(ll i=0;i<q;i++)
	{
		cin>>x;
		cin>>y;
		
			a[x-1]++;
		
			b[y-1]++;

	}
	ll even=0,odd=0;
	// for(ll i=0;i<n;i++)
	// {
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;
	// for(ll i=0;i<m;i++)
	// {
	// 	cout<<b[i]<<" ";
	// }
	// cout<<endl;


	for(ll i=0;i<m;i++)
	{
		if(b[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	ll ans=0;
	for(ll i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			ans+=odd;
		}
		else
		{
			ans+=even;
		}
	}
	cout<<ans<<endl;
	}
	


}