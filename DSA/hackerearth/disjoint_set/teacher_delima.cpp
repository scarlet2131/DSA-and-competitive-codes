#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll find_parent(ll x,vector<ll>& parent)
{
    while(parent[x]>
    0)
    {
        x=parent[x];
    }
    return x;
}
bool same_parent(ll x,ll y,vector<ll>& parent)
{
    return find_parent(x,parent)==find_parent(y,parent);
}
void do_union(ll x,ll y,vector<ll>& parent)
{
    if(same_parent(x,y,parent))
        return;
    ll px=find_parent(x,parent);
    ll py=find_parent(y,parent);
    if(abs(px)>abs(py))
    {
        parent[px]-=abs(parent[py]);
        parent[py]=px;
    }
    else
    {
        parent[py]-=abs(parent[px]);
        parent[px]=py;
    }
    
    

}
int main()
{
    ll n,m;
    cin>>n>>m;
    ll x,y;
    vector<ll> parent(n+1,-1);
    for(ll i=0;i<m;i++)
    {
        cin>>x>>y;
        do_union(x,y,parent);
      
    }
    ll mod=1e9+7;
    ll ans=1;
    for(ll i=1;i<n+1;i++)
    {
        if(parent[i]<0)
        {
            ans=((ans%mod)*(abs(parent[i])%mod))%mod;
        }
    }
    cout<<ans<<endl;
}