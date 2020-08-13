#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int M=1e6+1;
    int dp[M];
    for(int i=1;i<=9;i++)
        dp[i]=1;
    for(int i=10;i<=M;i++)
    {
        int x=i;
        int m=INT_MIN;
        while(x>0)
        {
            int rem=x%10;
            if(rem>m)
                m=rem;
            x/=10;
        }
        dp[i]= dp[i-m]+1;
        
    }
    cout<<dp[n]<<endl;
    
}