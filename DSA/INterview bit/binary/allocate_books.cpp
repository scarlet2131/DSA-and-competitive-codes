#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll bin_search(vector<int> &a,ll n,ll k,ll l,ll r)
{
    ll sum=0;
    ll s=0;
    for(int i=0;i<n;i++)
        {
                s+=a[i];
        }
    ll c=0;
    ll ans;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        
        c=1;
        sum=0;
        for(int i=0;i<n;i++)
        {
            if((sum+a[i])<=mid)
            {
                sum+=a[i];
            }
            else
            {
                c++;
                sum=a[i];
            }
        }

        if(c<=k)
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    
return max(ans,s-ans);

}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> a;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    int b;
    cin>>b;
    ll max=INT_MIN;
    ll sum=0;
    for(int i=0;i<a.size();i++)
        {
            sum+=(ll)a[i];
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        ll l=max;
        ll r=sum;
  ll ans=bin_search(a,a.size(),b,l,r);
  cout<<ans<<endl;
}
