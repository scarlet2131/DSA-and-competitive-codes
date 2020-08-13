#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mod=1e9+7;
    int M=1e6+1;
    int dp[M];
    for(int i=0;i<M;i++)
    {
        dp[i]=0;
    }
    dp[0]=1;
    
    for(int i=0;i<n;i++)
    {
        
        for(int j=1;j<M;j++)
        {
           
            if(j-a[i]>=0)
            {
                dp[j]=(dp[j]+dp[j-a[i]])%mod;
            }
        }
    }
    // for(int i=0;i<=k;i++)
    //     cout<<dp[i]<<" ";
    // cout<<endl;
    cout<<dp[k]%mod<<endl;
}