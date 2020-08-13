#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int price[n];
    for(int i=0;i<n;i++)
        cin>>price[i];
    int pages[n];
    for(int i=0;i<n;i++)
        cin>>pages[i];
    //dp state denotes the maximum page at price i
    int dp[k+1];
    for(int i=0;i<=k;i++)
    {
        dp[i]=0;
    }
    dp[0] = 0;
    //we are doing backward counting and the main price array is outside becoz 
    //we want to get unique price(or item only one time)
    //backward conting ensures that first update the maximum price and then the minimum ones.
    for(int j=0;j<n;j++)
    {
        for(int i=k;i>=price[j];i--)
        {
                int x=i;
                int Cpage=0;
                dp[i]=max(dp[i], pages[j] + dp[i-price[j]]);   
            
        }
    }
    // for(int i=1;i<=k;i++)
    // {
    //     cout << "Price: " << i << " -> ";
    //     cout<<dp[i]<<"\n";
    // }
    cout<<dp[k]<<endl;
    
    
}