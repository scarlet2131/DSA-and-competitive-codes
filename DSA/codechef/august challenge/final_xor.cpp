#include<bits/stdc++.h>
#define ll long long int
#define AX 1000006
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n+1];
		for (ll i = 1; i <=n; i++)
		{
			cin>>a[i];
		}


//set form
		ll ne[n+1];

		ne[0] = 0;


		set<ll> s;
		s.insert(0);

		vector<ll> v[AX];

		v[0].push_back(0);


		for(int i=1;i<=n;i++)
		{
			ne[i] = ne[i-1]^a[i];
			
			v[ne[i]].push_back(i);

			s.insert(ne[i]);
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
// cout<<b[i]<<" ";
// }
// cout<<endl;
		ll k1;
		ll triples=0;
		ll count=0;
		ll k2;
// g[0]++;
		sort(ne,ne+n+1);
		map<ll,ll>::iterator itr;
		set<ll>::iterator it;
		for( it = s.begin();it!=s.end();it++ )
		{
			// int x=ne[i];
			
			int x = *it;

			if(g.find(x) != g.end())
			{

			}


			ll dp[AX],sum[AX];
			int size = v[x].size();
			sum[0]=0;
			for(int i=1;i<v[x].size();i++)
			{
				if(i>1)
				{
					sum[i] = sum[i-1] + (i*1LL*(v[x][i]-v[x][i-1])) -1;
					dp[i] = dp[i-1] + sum[i];


				}

				else
				{
					ll d = v[x][i]-v[x][i-1]-1;
					sum[i] = d;
					dp[i] = d;
				}
			}
			if(v[x].size() > 0)
			{
				triples+= dp[size-1];
			}
			g[x]++;


		}








// ll k3=0;
// for(ll i=0;i<n;i++)
// {
// if(b[i]==0)
// {
// k3=i;
// triples+=k3;
// // cout<<"f"<<endl;
// // cout<<triples<<"fin"<<endl;
// }
// }
		cout<<triples<<endl;

// map<int,int>::iterator it;
// for(it=g.begin();it!=g.end();it++)
// {
// cout<<it->first<<" "<<it->second<<endl;
// }
// cout<<"final"<<endl;


	}
}