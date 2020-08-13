#include <bits/stdc++.h>
#define ll long long
using namespace std;
 ll add(ll a,ll b)
 {
    return a+b;
 }
int main()
{
 
    ll n; 
    cin >> n;
    ll result=0;
    ll no;
    add(45567,899);
    ll m=1000001;
    ll ext[m]={0};
    for(ll i=2; i*i<=m-1; i++){
        if(!ext[i]){
            for(ll j=i*i; j<=m-1; j+=i)
                ext[j]=i;
        }
    }
    add(45567,899);
    for(ll i=2; i<=m-1; i++)
    {

        if(!ext[i])
        {
            ext[i]=i;
        }
    }
    add(45567,899);
    for(ll i=2; i*i<=n; i++)
    {
        if(n%i==0 && ext[i]==i)
        {
            ll count=0, no=n;
            while(no%i==0)
            {
                count++;
                no/=i;
            }
            result+=(ll)((sqrt(1.0+(8.0*count))-1)/2.0);
        }
    }
    cout << result << endl;
}