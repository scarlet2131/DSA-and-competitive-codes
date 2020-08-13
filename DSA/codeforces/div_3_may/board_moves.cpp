#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll sum= 0,y=n;
        for(int i=n/2;i>=1;i--)
        {
            ll f = (y*1 + (y-1)*2 + y-2)*i;
            y-=2;
            sum+= f;
        }
        cout << sum << endl;
    }
}