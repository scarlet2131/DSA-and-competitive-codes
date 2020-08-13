#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	string s;
	cin>>s;
	ll n;
	cin>>n;
	ll c=0;
	for(ll i=0;i<s.length();i++)
	{
		if(s[i]=='a')
		{
			c++;
		}
	}
	ll f=n/s.length();
	// cout<<f<<" f "<<endl;
	ll ans=f*c;
	// cout<<ans<<" ans "<<endl;
	ll z=n-f*s.length();
	// cout<<z<<" z "<<endl;
	c=0;
	for(ll i=0;i<z;i++)
	{
		if(s[i]=='a')
		{
			c++;
		}
	}
	ans=ans+c;
	cout<<ans<<endl;
}