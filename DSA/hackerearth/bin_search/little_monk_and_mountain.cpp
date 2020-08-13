#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
struct comp
{
    bool operator()(pair<ll,ll>& x,pair<ll,ll>& y)
    {
        return x.second<y.first or (x.second==y.first and x.first<y.second);
    }
};
ll bin_search(ll k,vector<pair<ll,pair<ll,ll>>>& v)
{
    ll l=0;
    ll r=v.size()-1;
    ll ans=-1;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(v[mid].first>k)
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            
            l=mid+1;
        }
        
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,q;
    cin>>n>>q;
    vector<pair<ll,ll>> v;
    ll x,y;
    for(ll i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),comp());
    vector<pair<ll,pair<ll,ll>>> send;
    ll c=0;
    for(ll i=0;i<n;i++)
    {
        c+=v[i].second-v[i].first+1;
        send.push_back({c,{v[i].first,v[i].second}});
    }
    //  for(ll i=0;i<n;i++)
    // {
    //     cout<<send[i].first<<" "<<send[i].second.first<<" "<<send[i].second.second<<endl;
    // }

    ll query;
    while(q--)
    {
        cin>>query;
        ll z = bin_search(query,send);
        if(z==-1)
            z=n-1;
        // cout<<z<<endl;
        if(z==0)
            cout<<send[z].second.first+(query-1)<<'\n';
        else
            cout<<send[z].second.first+(query-send[z-1].first-1)<<'\n';

    }
}