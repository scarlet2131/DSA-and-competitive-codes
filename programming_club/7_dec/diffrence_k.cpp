#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int bs(ll a[],ll l,ll h,ll k)
{
    while(l<=h)
    {
        ll mid = (l+h)/2;
        if(a[mid] == k)
            return 1;
        else if(a[mid]>k)
            h = mid-1;
        else l = mid+1;
    }
    return 0;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int f = 0;
        for(int i=0;i<n;i++)
        {
            if(bs(a,0,n,k+a[i]))
            {
                f = 1;
                break;
            }
                
        }
        if(f==1)
            cout<<"true\n";
        else cout<<"false\n";
        
    }
}
