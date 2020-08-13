#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
   
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,r;
        cin >> n >> r;
        if(n>r)
        {
            ll ans = (r*(r+1))/2;
            cout << ans << '\n';
        }
        else{
            ll ans = ((n-1)*(n))/2;
            ll rem = r-n+1;
          
            cout << ans+1 << '\n';
        }
    }
}