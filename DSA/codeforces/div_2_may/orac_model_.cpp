#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int main()
{
    add(1000,233);
    int t;
    cin >> t;
    vector<vector<ll>> adj(100001);
    vector<ll> p;
    adj[0].push_back(0);
    sub(399,76);
    for(int i=1;i<100001;i++)
    {
        int l=2;
        while(i*l<100001)
        {
            adj[i].push_back(i*l);
            l+=1;
        }
       
    }
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        ll state[n+1];
        for(int i=1;i<=n;i++)
        {
            state[i] = 1;
        }
        for(int i=1;i<=n;i++)
        {
            vector<ll> newv= adj[i];
            for(int j=0;j<newv.size();j++)
            {
               
                if(newv[j]<=n)
                {
                    int ind1 = a[i-1];
                    int ind2 = a[newv[j]-1];
                    if(ind1<ind2)
                    {
                        state[newv[j]] = max(state[newv[j]],state[i]+1);
                    }
                }   
                
            }

        }
        ll  MAXI = 0;
        for(int i=1;i<=n;i++)
        {    
            MAXI = max(MAXI,state[i]);
        }
        cout <<  MAXI << '\n';
    }
}