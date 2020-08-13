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
        int count[100]={0};
        for(int i=0;i<n;i++)
        {
            count[a[i]]++;
        }
        int ans;
        for(int i=1;i<=100;i++)
        {
            count[i]=count[i]+count[i-1];
            if(n%2==0)
            {
               if(count[i]>=n/2)
                {
                    ans=i;
                    break;
                } 
            }
            else
            {
                if(count[i]>n/2)
                {
                    ans=i;
                    break;
                }
            }
            
        }
        cout<<ans<<endl;
        
    }
}