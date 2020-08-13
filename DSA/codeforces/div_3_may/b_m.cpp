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
        ll y =n;
        ll x=0;
        for(int i=n/2;i>=1;i--)
        {
           x+=i*(y*2+(y-2)*2);
            y-=2;
        }
        cout<<x<<endl;
    }
}