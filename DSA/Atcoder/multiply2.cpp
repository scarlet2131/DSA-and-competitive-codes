#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	ll p=1;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	ll z=pow(10,18);
	int f=0;
	for(ll i=0;i<n;i++)
	{
		p*=a[i];
		if(p>z)
		{
			f=1;
			break;
		}

	}
	
	if(f==1) cout<<"-1"<<endl;
	else
		cout<<p<<endl;

}