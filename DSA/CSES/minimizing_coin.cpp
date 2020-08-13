#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,x;
    cin>>n>>x;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    //dp state(dp[i]) denotes the minimum number of coins to get the sum i;
   ll dp[x+1];

   //we took intmax becoz we have to take the minimum of all the earlier possible states.
   for(ll i=0;i<=x;i++)
   {
       dp[i] = INT_MAX;
   }
   dp[0]=0;
   for(ll i=1;i<=x;i++)
   {
       //i denotes sum and a[j] denotes the coin value that we have 
       for(ll j=0;j<n;j++)
       {
           //if the we have dp[i]==INT_MAX that means that we cannt reach to that sum .
           // by taking a[j]
            if(i-a[j]>=0 and dp[i-a[j]]!=INT_MAX)
            {

                dp[i]=min(dp[i],dp[i-a[j]]+1);
            }
               
       }
   }
     
    cout<< (dp[x]==INT_MAX ?-1:dp[x]) <<endl;
    
        
    
}