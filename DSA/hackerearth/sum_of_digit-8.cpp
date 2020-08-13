    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    ll dp[16][150][2];
    vector<int> bv;
    ll a,b,s;
    ll solve(int ind,ll sum,int flag)
    {
        if(ind==bv.size())
        {
          if(sum==s)
            return 1;
          return 0;
        }
        if(dp[ind][sum][flag]!=-1) return dp[ind][sum][flag];
        ll tans=0;
        int pp=flag;
        for(int i=0;i<=9;i++)
        {
     
          if(flag==1)
          {
            if(i==bv[ind])
            tans+=solve(ind+1,sum+i,1);
            if(i<bv[ind])
            tans+=solve(ind+1,sum+i,0);
            if(i>bv[ind])
              break;
          }
        else
            tans+=solve(ind+1,sum+i,0);
     
        }
        return dp[ind][sum][flag]=tans;
     
    }
     
    void makevec(ll n)
    {
      while(n)
      {
        bv.push_back(n%10);
        n/=10;
      }
      reverse(bv.begin(),bv.end());
    }
    ll fun(ll x)
    {
        bv.clear();
      memset(dp,-1,sizeof(dp));
      makevec(x);
      return solve(0,0,1);
    }
     
    int main()
    {
      
      ll ans1,ans2;
      cin>>a>>b>>s;
      memset(dp,-1,sizeof(dp));
      makevec(b);
      ans1=solve(0,0,1);
     
      bv.clear();
      memset(dp,-1,sizeof(dp));
      makevec(a-1);
      ans2=solve(0,0,1);
     
      cout<<(ans1-ans2)<<endl;
     
      ll temp=fun(a-1);
     
     
      ll l=a,h=b;
      while(l<h)
      {
          ll m=l+(h-l)/2;
        if(fun(m)>temp)
          h=m;
        else
          l=m+1;
      }
      cout<<l;
     
     
      return 0;
    }
Language: C++14