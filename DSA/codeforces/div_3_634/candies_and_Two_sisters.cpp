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
        ll ans;
        if(n%2==0) ans=n/2-1;
        else ans=n/2;
        cout<<ans<<endl;
    }
}