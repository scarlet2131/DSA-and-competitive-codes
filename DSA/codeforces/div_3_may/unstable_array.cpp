#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        if(n==1)
            cout<<"0"<<endl;
        else if(n==2)
            cout<<m<<endl;
        else 
            cout<<m*2<<endl;

    }
}