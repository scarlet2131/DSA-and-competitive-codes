#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int  main()
{
	ll n,k;
	cin>>n>>k;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll g=__gcd(a[0],a[1]);
	for(ll i=2;i<n;i++)
	{
		g=__gcd(g,a[i]);
	}
	// sort(a,a+n);
	ll p;
	ll f=0;
	
	while(k--)
	{
		cin>>p;
		if(p%g==0)
		{
			cout<<"YES"<<endl;
		}

		
		else
		{
			cout<<"NO"<<endl;
		}
		
	}
}