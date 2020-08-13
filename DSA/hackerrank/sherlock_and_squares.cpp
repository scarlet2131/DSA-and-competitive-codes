#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll bin_search_l(vector<ll> v,ll x)
{
	ll l=0;
	ll r=v.size()-1;
	ll ans=-1;
	while(l<=r)
	{
		ll mid=(l+r)/2;
		if(v[mid]<x)
		{
			

			l=mid+1;
		}
		else
		{
			
			ans=mid;
			// cout<<"ans "<<ans<<endl;
			// cout<<"vans "<<v[ans]<<endl;
			r=mid-1;
		}
	}
	return ans;

}
ll bin_search_r(vector<ll> v,ll x)
{
	ll l=0;
	ll r=v.size()-1;
	ll ans=-1;
	while(l<=r)
	{
		ll mid=(l+r)/2;
		if(v[mid]>x)
		{

			
			r=mid-1;
		}
		else
		{
			ans=mid;
			// cout<<"ans "<<ans<<endl;
			// cout<<"vans "<<v[ans]<<endl;
			l=mid+1;
		}
	}
	return ans;

}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll l,r;
		cin>>l>>r;
		vector<ll> v;
		for(ll i=0;i<=100000;i++)
		{
			ll x=i*i;
			v.push_back(x);
		}
		ll x=bin_search_l(v,l);
		ll y=bin_search_r(v,r);
		ll ans;
		if(x<y)
		{
			ans=y-x+1;
		}
		else if(x==y)
		{
			ans=1;
		}
		else
		{
			ans=0;
		}
		// cout<<x<<" "<<y<<endl;
		cout<<ans<<endl;

	}
}