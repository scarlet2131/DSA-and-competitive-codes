#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll dp[n+1];
    ll mod=1e9+7;
    for(ll i=0;i<n+1;i++)
        dp[i]=0;
    dp[0]=1;
    dp[1]=1;
    for(ll i=2;i<=n;i++)
    {
        for(ll j=1;j<=6;j++)
        {
            if(i-j>=0)
            {
                dp[i]=(dp[i]+dp[i-j])%mod;
                // cout<<i<<" "<<i-j<<" "<<dp[i-j]<<endl;
            }
                
        }
        
        // cout<<endl;
    }
    // for(ll i=1;i<=n;i++)
    // {
    //     cout<<dp[i]<<" ";
    // }
    // cout<<endl;
    cout<<dp[n]%mod<<endl;
}
