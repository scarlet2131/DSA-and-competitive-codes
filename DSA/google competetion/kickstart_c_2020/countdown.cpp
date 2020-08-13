#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int z=0;z<t;z++)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
             int count=0;
             
            if(a[i]==k)
            {
                // cout<<a[i]<<" "<<i<<endl;
                int x=k;
                while(x>0)
                {
                    if(a[i]==x)
                    {
                        count++;
                    }
                    else
                    {
                        break;
                    }
                    
                    i++;
                    x--;
                }
                i--;
            }
            if(count==k)
            {
                ans++;
            }
        }
        cout<<"Case #"<<z+1<<": "<<ans<<endl;

    }
}