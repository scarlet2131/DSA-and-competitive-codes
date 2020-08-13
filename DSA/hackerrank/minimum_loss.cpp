#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector<pair<ll,ll>> v;
	for(ll i=0;i<n;i++)
	{
		v.push_back({a[i],i});
	}
	ll m=INT_MAX;
	sort(v.begin(),v.end());
	for(ll i=1;i<n;i++)
	{
		ll f=v[i].first-v[i-1].first;
		if(f<m and v[i].second<v[i-1].second)
		{
			m=f;
		}
	}
	cout<<m<<endl;
}