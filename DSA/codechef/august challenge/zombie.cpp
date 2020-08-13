#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll c[n],h[n];
		for(ll i=0;i<n;i++)
		{
			cin>>c[i];
		}
		for(ll i=0;i<n;i++)
		{
			cin>>h[i];
		}
		ll z[n]={0};
		ll k1,k2=0;
		for(ll i=1;i<=n;i++)
		{
			k1=i-c[i-1]-1;
			k2=i+c[i-1];
			if(k1>=0)
			{
				z[k1]=z[k1]+1;
			}
			 else if (k1<0)
			 {
					z[0]=z[0]+1;
			 }
			if(k2<=n-1)
			{
				z[k2]=z[k2]-1;
			}

			// cout<<"K1"<<k1<<" "<<"K2"<<k2<<" "<<endl;
		}
		// cout<<"before"<<endl;
		// for(ll i=0;i<n;i++)
		// {
		// 	cout<<z[i]<<" ";
		// }
		ll g=0;
		for(ll i=0;i<n;i++)
		{

			g=z[i];
			z[i+1]+=g;
		}
		// for(ll i=0;i<n;i++)
		// {
		// 	cout<<z[i]<<" ";
		// }
		// cout<<endl;
		sort(z,z+n);
		sort(h,h+n);
		int f=0;
		for(ll i=0;i<n;i++)
		{
			if(z[i]!=h[i])
			{
				f=1;
			}
		}
		if(f==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
}