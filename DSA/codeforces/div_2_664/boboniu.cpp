#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll a[4];
       bool ans=false;
       ll even=0,odd=0;
       for(ll i=0;i<4;i++)
       {
           cin>>a[i];
           
           if(a[i]%2==0) even++;
           else odd++;
       }
       
        if(odd==0 or odd==1)
        {
            ans=true;
        }
        else
        {
            even=0,odd=0;
            if(a[0]>0 and a[1]>0 and a[2]>0)
            {
                    for(ll i=0;i<=2;i++)
                    {
                        a[i]+=-1;
                        if(a[i]%2==0) even++;
                        else odd++;
                    }
                    a[3]+=3;
                    if(a[3]%2==0) even++;
                    else odd++;
                    if(odd==0 or odd==1)
                        ans=true;
                    else ans= false;
            }
            
        }
        if(ans==true)
            cout<<"Yes\n";
        else cout<<"No\n";
        
        
    }

}