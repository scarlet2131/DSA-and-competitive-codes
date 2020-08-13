
#define INF 0x3f3f3f3f
vector<int> v;
    int dp[100001];
    bool is_prime(int n)
    {
        if(n<=1)
            return false;
        if(n<=3)
            return true;
        if(n%2==0 || n%3==0)
            return false;
        for(int i=5;i*i<=n;i+=6)
        {
            if(n%i==0 || n%(i+2)==0)
            {
                return false;
            }
        }
        return true;
    }
    
    void dp_g(int n)
    {
        bool prime[n+1];
        memset(prime,true,sizeof(prime));
       for(int p=2;p*p<=n;p++)
       {
           if(prime[p]==true)
           {
               for(int i=p*p;i<=n;i+p)
               {
                   prime[i]=false;
               }
           }
       }
       for(int p=2;p<=n;p++)
       {
           if(prime[p])
                v.push_back(p);
       }
       for(int i=0;i<v.size();i++)
       {
           cout<<v[i]<<" ";
       }
       cout<<endl;
       
       
        sort(v.begin(),v.end());
        memset(dp,INF,sizeof(dp));
        dp[0]=0;
        for(int i=1;i<=10000;i++)
        {
            for(int j=0;j<v.size();j++)
            {
                if(i>=v[j])
                {
                    dp[i]=min(dp[i],dp[i-v[i]]+1);
                }
            }
        }
    }
int Solution::solve(vector<int> &a) {
    int sum=0;
    int n=a.size();
    int s=0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=sqrt(a[i]);j++)
        {
            if(a[i]%j==0)
            {
                if(a[i]/j==j)
                {
                    s+=j;
                }
                else
                {
                    s+=j+a[i]/j;
                    
                }
            }
        }
    }
    dp_g(s);
    for(int i=0;i<=s;i++)
    {
        cout<<dp[i]<<" ";
    }
    cout<<endl;
   int ans;
    
    ans= dp[s];
    
   
         
  
    return ans;
}
