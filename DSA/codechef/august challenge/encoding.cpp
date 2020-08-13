



#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll mod = 1e9+7;
ll func(ll x,ll nr)
{
	ll a[nr]={0};
	ll c=0;

	while(x>0)
	{
		a[c]=x%10;
// cout<<"x"<<x<<endl;

		c++;
		x=x/10;

	}

// cout<<"array"<<endl;
// for(ll i=0;i<nr;i++)
// {
// cout<<a[i]<<" ";
// }
// for(int i=0;i<nr;i++)
// {
// if(a[i]==-1)
// {
// // fin=i-1;
// break;
// }
// }
	ll k=0;
	ll ans=0;
// cout<<"fin"<<fin<<endl;
	for(ll i=0;i<c;i++)
	{
		k=i;

		if(a[i]==a[i+1])
		{
			k=i+1;
		}
		else
		{
			ans+=(a[i]%mod*(ll)pow(10,k)%mod)%mod;
			ans %= mod;
// cout<<"ans"<<" "<<ans;
		}



	}

// for(int i=0;i<nr;i++)
// {
// cout<<a[i]<<" ";
// }
// cout<<endl;
	return ans;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll nl,l;
		ll nr,r;
		cin>>nl>>l;
		cin>>nr>>r;
		ll res=0;
		for(ll i=l;i<=r;i++)
		{
			res+=func(i,nr);
			res %= mod;
		}
		cout<<res%mod<<endl;
	}


}
