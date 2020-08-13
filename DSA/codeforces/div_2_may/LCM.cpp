/*
    handle - mr_2131
    problemName - Orac and Lcm
*/

#include<bits/stdc++.h>
using namespace std;
#define ll          long long int
#define fast         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define INF          1e18
#define Vi           vector<int> 
#define VI           vector<vector<int> >
#define VL           vector<vector<long long int> > 
#define PII          pair<int,int> 
#define PLL          pair<long long int,long long int>
#define PSI          pair<string,int>
#define PB           push_back

int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};
int DX[] = {0,-1,-1,-1,0,1,1,1};
int DY[] = {-1,-1,0,1,1,1,0,-1};
ll find_gcd(ll a,ll b)
{
    if(a==0)
        return b;
    return find_gcd(b%a,a);
}
int main()
{
    fast;
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll gcd[n];
    gcd[n-1]=a[n-1];
    ll gcd_final[n];
    ll c=0;
    for(ll  i=n-2;i>=0;i--)
    {
        gcd[i]=find_gcd(gcd[i+1],a[i]);
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<gcd[i]<<" ";
    // }
    // cout<<endl;
    for(ll i=0;i<n-1;i++)
    {
        gcd_final[c++]=(a[i]*gcd[i+1])/find_gcd(a[i],gcd[i+1]);
    }
    ll ans=gcd_final[0];
    for(ll i=1;i<c;i++)
    {
        ans=find_gcd(ans,gcd_final[i]);
    }
    cout<<ans<<'\n';
}