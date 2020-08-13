#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    char a[n][n];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    ll dp[n][n];
    int z=0,x=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i][0]!='*')
            dp[i][0]=1;
        else
        {
            dp[i][0]=0;
             z=i;
            break;
        }
            

        
    }
    for(ll i=0;i<n;i++)
    {
        if(a[0][i]!='*')
            dp[0][i]=1;
        else
        {

            dp[0][i]=0;
            x=i;
            break;
        }
    }
    if(a[z][0]=='*')
    {
        for(int i=z;i<n;i++)
        {
            dp[i][0]=0;
        }
    }
    if(a[0][x]=='*')
    {
        for(int i=x;i<n;i++)
        {
            dp[0][i]=0;
        }
    }
    
    ll mod =1e9+7;
    for(ll i=1;i<n;i++)
    {
        for(ll j=1;j<n;j++)
        {
            if(a[i][j]!='*')
                dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
            else
                dp[i][j]=0;
        }
    }
    // for(ll i=0;i<n;i++)
    // {
    //     for(ll j=0;j<n;j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    if(a[0][0]=='*')
        cout<<"0"<<endl;
    else
        cout<<dp[n-1][n-1]%mod<<endl;
    

}