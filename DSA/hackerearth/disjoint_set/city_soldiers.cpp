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
bool same_parent(ll x,ll y,vector<ll>& par)
{
    return find_parent(x,par)==find_parent(y,par);
}
void do_union(ll x,ll y,vector<ll>& par)
{
    if(same_parent(x,y,par))
        return;
    par[x]=y;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,q;
    cin>>n>>q;
    vector<ll> par(n+1,0);
    for(ll i=0;i<n+1;i++)
    {
        par[i]=i;
    }
    ll x;
    ll a,b;
    for(ll i=0;i<q;i++)
    {
        cin>>x;
        if(x==1)
        {
            cin>>a>>b;
            do_union(a,b,par);
            
        }
        else if(x==2)
        {
            cin>>a;
            ll xp=find_parent(a,par);
            par[xp]=a;
            par[a]=a;
        }
        else if(x==3)
        {
            cin>>a;
            cout<<par[a]<<"\n";
        }
    }

}