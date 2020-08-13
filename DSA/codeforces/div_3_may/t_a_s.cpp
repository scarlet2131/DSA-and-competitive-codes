#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        int l=0,r=n-1;
        sort(a,a+n);
        sort(b,b+n);
        while(r>=0 and k>0)
        {
            if(a[l]<b[r])
            {
                int x=a[l];
                a[l]=b[r];
                b[r]=x;
                l++;
                r--;
            }
            else
            {
                break;
            }
            k--;
            
        }
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=a[i];
            // cout<<a[i]<<" ";
        }
        // cout<<endl;
        // for(int i=0;i<n;i++)
        // { 
        //     cout<<b[i]<<" ";
        // }
        // cout<<endl;
        cout<<s<<endl;
    }
}