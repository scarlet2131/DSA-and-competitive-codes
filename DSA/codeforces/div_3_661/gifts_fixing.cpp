#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll b[n];
    for(ll i=0;i<n;i++)
    {
        cin>>b[i];
    }
    ll min_can=*min_element(a,a+n);
    ll min_orang=*min_element(b,b+n);
    // cout<<min_can<<" "<<min_orang<<endl;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        if( a[i]==min_can and b[i]==min_orang )
                continue;
            else if( a[i]==min_can and b[i]!=min_orang)
            {
                ans += b[i]-min_orang;
            }
            else if( a[i]!=min_can and b[i]==min_orang )
                ans += a[i]-min_can;
            else{
                ans += max( b[i]-min_orang,a[i]-min_can );
            }
    }
    cout<<ans<<endl;
    }
    
}