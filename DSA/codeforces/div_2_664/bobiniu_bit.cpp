#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int c[n]={0};
    for(int i=0;i<n;i++)
    {
        int b_min=INT_MAX;
        for(int j=0;j<m;j++)
        {
            b_min=min(b_min, a[i]&b[j]);
        }
        c[i] = b_min;
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cout<<c[i]<<" ";
        ans= ans| c[i];
    }
    cout<<endl;
    cout<<ans<<endl;
}