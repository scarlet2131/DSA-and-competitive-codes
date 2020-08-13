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
        int c = 0;
        while(n!=1)
        {
            if(n%6==0)
            {
                 n/=6;
            }     
            else
                n *= 2;
            c += 1;
            if(c>1000)
            {
                break;
            }
                
        }
        if(c>1000)
            cout << -1 << '\n';
        else cout << c << '\n';
    }
}