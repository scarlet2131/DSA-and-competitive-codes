#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],b[n];
        ll ma=INT_MAX,mb=INT_MAX;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            ma= min(ma,a[i]);
        }
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
            mb= min(mb,b[i]);
        }
        ll ans = 0;
        // cout<<ma<<" "<<mb<<endl;
        for(ll i=0;i<n;i++)
        {
            if(a[i]>ma and b[i]>mb)
            {
                ll k=min(a[i]-ma,b[i]-mb);
                ans+=k;
                a[i]-=k;
                b[i]-=k;
                // cout<<"same "<<a[i]<<" "<<b[i]<<endl;

                if(a[i]!=ma)
                {
                    ans+=a[i]-ma;
                    a[i]-=a[i]-ma;
                }
                else if(b[i]!=mb)
                {
                    ans+=b[i]-mb;
                    b[i]-=b[i]-mb;
                }
                // cout<<a[i]<<" "<<b[i]<<endl;
                // cout<<ans<<endl;
                
            }
            else if(a[i]>ma and b[i]==mb)
            {
                ans+=a[i]-ma;
                a[i]-=a[i]-ma;
                // cout<<ans<<endl;
            }
            else if(b[i]>mb and a[i]==ma)
            {
                ans+=b[i]-mb;
                b[i]-=b[i]-mb;
                // cout<<ans<<endl;
            }
        }
        cout<<ans<<endl;

        
    }
}