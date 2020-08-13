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
		ll a[n];
		for (ll i = 0; i <n; i++)
		{
			cin>>a[i];
		}
		map<ll, ll>g;
		ll b[n]={0};
		ll xor_o=a[0];
		b[0]=a[0];
		// cout<<b[0]<<endl;
		for(ll i=0;i<n-1;i++)
		{
			xor_o=xor_o^a[i+1];
			// cout<<"xor"<<xor_o<<endl;
			b[i+1]=xor_o;
		}
		// for(int i=0;i<n;i++)
		// {
		// 	cout<<b[i]<<" ";
		// }
		// cout<<endl;
		ll k1;
		ll triples=0;
		ll count=0;
		ll k2;
		// g[0]++;
		map<ll,ll>::iterator itr;
		for( ll i=0;i<n;i++)
		{
			g[b[i]]++;
			for(itr=g.begin();itr!=g.end();itr++)
			{
				
				if(itr->first==b[i] && itr->second>1)
				{
					k1=i;
					k2=itr->first;
					// cout<<k1<<" "<<"k1"<<" "<<k2<<endl;
					for(ll j=0;j<n;j++)
					{
						if(b[j]==k2 && j<k1)
						{
							count=abs(j+1-k1);
							triples+=count;
							// cout<<"J"<<j<<" "<<endl;
							// cout<<triples<<" "<<"t"<<endl;
							
						}
					}
					break;
					
				}
				


			}
			


		}
		ll k3=0;
		for(ll i=0;i<n;i++)
		{
			if(b[i]==0)
			{
				k3=i;
				triples+=k3;
				// cout<<"f"<<endl;
				// cout<<triples<<"fin"<<endl;
			}
		}
		 cout<<triples<<endl;

		// map<int,int>::iterator it;
		// for(it=g.begin();it!=g.end();it++)
		// {
		// 	cout<<it->first<<" "<<it->second<<endl;
		// }
		// cout<<"final"<<endl;


	}
}
