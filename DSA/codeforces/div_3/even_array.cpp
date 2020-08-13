#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int odd=0,even=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0 and a[i]%2!=0)
            {
                even++;
            }
            else if(i%2!=0 and a[i]%2==0)
            {
                odd++;
            }
        }
        if(even!=odd)
        {
            ans=-1;
        }
        else 
        {
            ans=even;
        }
        cout<<ans<<endl;
         
    }
}