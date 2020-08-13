#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];   
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];   

        }
      
        ll ans= 0;
        for(ll i=1;i<=100;i++)
        {
            ll s = i;
            
            bool f[n];
            ll var = 0;
            memset(f,false,sizeof(f));
            for(ll j=0;j<n-1;j++)
            {
                for(ll k=j+1;k<n;k++)
                {
                    if( f[j]==false and f[k]==false and a[j]+a[k]==s )
                    {
                        var++;
                        f[j]=true;
                        f[k]=true;
                        break;
                    }
                }
            }
            ans= max(var,ans);
        } 
        cout<<ans<<endl;    
    }
}
