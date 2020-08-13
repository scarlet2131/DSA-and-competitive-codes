#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n,m;
	ll mod=1e9+7;
	cin>>n>>m;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	ll f=1;
	ll s=0;
	ll ans=0;
	ll c=0;
	if(m==1)
	{
		for(int i=0;i<n;i++)
		{
			ans=(ans+((i+1)%mod*(a[i]%mod))%mod)%mod;
		}
		cout<<ans%mod<<endl;
	}
	else if(n<m)
	{
		cout<<0<<endl;
	}
	else
	{
			while(f<n)
		{
			c++;
			
			if(c<n/m)
			{
				s=0;
				for(ll i=f-1;i<f+m-1;i++)
				{
					s=(s%mod+a[i]%mod)%mod;
				}
				// cout<<"c s ans";
				ans=(ans%mod+(c%mod*(s%mod))%mod)%mod;
				// cout<<c<<" "<<s<<" "<<ans<<endl;
				f=(f+m)%mod;
			}
			else
			{
				s=0;
				for(ll i=f-1;i<n;i++)
				{
					s=(s%mod+a[i]%mod)%mod;
				}
				// cout<<"c s ans";
				ans=(ans%mod+(c%mod*(s%mod))%mod)%mod;
				// cout<<c<<" "<<s<<" "<<ans<<endl;
				break;
			}
			
		}
		cout<<ans%mod<<endl;
	}
	
}