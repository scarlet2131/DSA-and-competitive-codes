#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll getPar(ll x,ll par[]){
    while(x!=par[x])
        x = par[x];
    return x;
}
ll find(ll x,ll y,ll par[])
{
    return getPar(x,par) == getPar(y,par);
}
ll doUnion(ll x,ll y,ll par[],ll size[])
{
    if( find(x,y,par) )
        return -1;
    ll p1 = getPar(x,par);
    ll p2 = getPar(y,par);
    ll s1 = size[p1];
    ll s2 = size[p2];
    if( s1 > s2 )
    {
        par[p2] = p1;
        size[p1] += s2;
    }
    else
    {
        par[p1] = p2;
        size[p2] += s1;
    }
    return 1;
}
int main()
{
        ll n,m;
        cin >> n >> m;
        ll par[n+m+1],size[n+m+1];
        for(ll i=1;i<=n+m;i++)
        {
            par[i] = i;
            size[i] = 1;
        }
        ll q1;
        cin>>q1;
        ll x,y;
        for(ll i=0;i<q1;i++)
        {
            cin>>x>>y;
            doUnion(x,y,par,size);
        }
        ll q2;
        cin>>q2;
        for(ll i=0;i<q2;i++)
        {
            cin>>x>>y;
            doUnion(x+n,y+n,par,size);
        }
        ll q3;
        cin>>q3;
        for(ll i=0;i<q3;i++)
        {
            cin>>x>>y;
            doUnion(x,y+n,par,size);
        }
        ll ans=0;
        unordered_map<ll,pair<ll,ll>> g;
        for(ll i=1;i<n+m+1;i++)
        {
           ll l=getPar(i,par);
            if(i<=n)
                g[l].first++;
            else
                g[l].second++;
        }
        for(auto it=g.begin();it!=g.end();it++)
        {
          ans+=it->second.first*(m-it->second.second);
        }
      
        cout<<ans<<endl;

}