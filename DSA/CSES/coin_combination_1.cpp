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
    for(int i=1;i<M;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i-a[j]>=0)
            {
                dp[i]=(dp[i]+dp[i-a[j]])%mod;
            }
        }
    }
    cout<<dp[k]%mod<<endl;
}