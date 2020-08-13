#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ll k;
        cin >> k;
        vector<ll> v(n);
        map<ll,ll> g;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            if(v[i]%k!=0)
                g[ v[i]%k ]++;
        }
        ll answer = 0;
        for(auto it=g.begin();it!=g.end();it++)
        {
            ll l = k - it->first;
            ll r = l + (it->second -1)*k;
            answer = max(answer,r+1);
        }
        cout << answer << '\n';
    }
}
