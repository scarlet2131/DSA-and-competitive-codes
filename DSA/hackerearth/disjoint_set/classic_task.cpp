#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll find_parent(ll x,vector<ll>& par)
{
    while(par[x]!=x)
    {
        x=par[x];
    }
    return x;
}
ll same_parent(ll l,ll r,vector<ll>& par)
{
    return find_parent(l,par)==find_parent(r,par);
}
ll do_union(ll l,ll r,vector<ll>& par,vector<ll>& size)
{
    if(same_parent(l,r,par))
        return -1;
    ll lp=find_parent(l,par);
    ll rp=find_parent(r,par);
    ll sl=size[lp];
    ll sr=size[rp];
    if(sl>sr)
    {
        par[rp]=lp;
        size[lp]+=sr;
    }
    else
    {
        par[lp]=rp;
        size[rp]+=sl;
    }
    return 1;

}
int main()
{
    ll n,m;
    cin>>n>>m;
    ll x,y;
    vector<ll>par(n+1,0);
    vector<ll>size(n+1,1);
    for(ll i=0;i<n+1;i++)
    {
        par[i]=i;
    }
    int c=0;
    vector<pair<ll,pair<ll,ll>>> g;
    for(ll i=0;i<m;i++)
    {
        cin>>x>>y;
        pair<ll,ll> pairXY={x,y};
        g.push_back({y-x+1,pairXY});
        
    }
    sort(g.begin(),g.end());
    for(ll i=g.size()-1;i>=0;i--)
    {
        ll l=g[i].second.first;
        ll r=g[i].second.second;
        while(l<r)
        {
            ll res=do_union(l,r,par,size);
            if(res==-1)
                break;
            l++;
            r--;
            
        }
    }
    map<int,int> gem;
    for(ll i=1;i<n+1;i++)
    {
       int p=find_parent(i,par);
       gem[p]++;
    }
    cout<<gem.size();
    cout<<endl;
}