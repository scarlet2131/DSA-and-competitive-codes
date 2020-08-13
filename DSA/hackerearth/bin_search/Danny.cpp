#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll predicate(ll m,ll a[],ll n)
{
    ll fin=0;
    for(ll i=0;i<n;i++)
    {
        ll ans=0;
        ll z=a[i];
        ll l=i;
        ll r=n-1;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            if(a[mid]-z<=m)
            {
                ans=mid-i;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
            
        }
        // cout<<z<<" "<<ans<<endl;
        fin+=ans;

    }
    return fin;
}
ll bin_search(ll k,ll a[],ll n)
{
    ll l=0;
    ll r=a[n-1]-a[0];
    ll ans=-1;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        // cout<<mid<<endl;
        // cout<<predicate(mid,a,n)<<endl;
        if(predicate(mid,a,n)>=k)
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
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<bin_search(k,a,n)<<'\n';
}