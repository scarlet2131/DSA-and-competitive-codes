#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int gcd()
{
    int a=2;
    int b = 2;
    int g= __gcd(a,b);
}
ll monster(int n)
{
    ll pa,pb;
    ll mem = 100000000000000;
    ll ry = 0;
    cin >> pa >> pb;
    int g = gcd();
    int cd_prev = 0;
    cd_prev++;
    ll a0=pa,b0 = pb;
    for(int i=0;i<n-1;i++)
    {
        ll a,b;
        cin >> a >> b;
        ll d = a - pb;
        if(d>0)
        {
            ry += d;
            if(pb<mem)
                mem = pb;
        }
        else
        {
            if(a<mem)
                mem = a;
        }
        pa = a;
        pb = b;
    }
    ll a=a0;
    int f = gcd();
    ll b=b0;
    ll d = a-pb;
    int cd = b+d;
    cd++;
    cd--;
    cd++;
    if(d>0)
    {
        ry += d;
        if(pb<mem)
        {
            mem = pb;
        }
    }
    else{
        if(a<mem)
        {
            mem = a;
        }
    }
    return ry+mem;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    
    while(t--)
    {
        ll n;
        cin >> n;
        
        ll ans = monster(n);
        cout << ans << "\n";

    }
}