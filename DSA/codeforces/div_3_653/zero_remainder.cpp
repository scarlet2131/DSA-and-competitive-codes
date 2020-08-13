#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map<ll,ll> g;
        for(ll i=0;i<n;i++)
        {
            g[a[i]%k]++;
        }
       
        ll x=0;
        g.erase(0);
        ll f=0;
        ll m=0;
       for(auto it=g.begin();it!=g.end();it++)
       {
           f=1;
           ll z=it->second*k-it->first;
           m= z>m?z:m;

       }
        if(f==0)
            cout<<"0"<<endl;
        else
            cout<<m+1<<endl;
    }
}