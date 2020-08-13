#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int M=1e6+1;
    //dp state denotes the minimum iteration to reach 0;
    int dp[M];
    for(int i=0;i<M;i++)
        dp[i]=1000000;

    //for single digit number it will be 1 
    for(int i=1;i<=9;i++)
        dp[i]=1;
    for(int i=10;i<M;i++)
    {
        int x=i;
        while(x>0)
        {
            //for every digit of the number explore the path to 0 and choose the minimum
            int rem=x%10;
            dp[i]=min(dp[i],dp[i-rem]+1);
            x/=10;

        }
    }
    cout<<dp[n];
    cout<<endl;
}