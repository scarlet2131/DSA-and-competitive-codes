#include<bits/stdc++.h>
using namespace std;
int frog(int a[],int n,int l)
{
    if(l>n-1)
        return INT_MAX;
    if(l==n-3)
        return 0;
    
    int ans = INT_MAX;
    ans = min( ans, abs(a[l+1]-a[l]) +frog(a,n,l+1) );
    ans = min( ans, abs(a[l+2]-a[l])+frog(a,n,l+2) );
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<frog(a,n,0)<<endl;

}
