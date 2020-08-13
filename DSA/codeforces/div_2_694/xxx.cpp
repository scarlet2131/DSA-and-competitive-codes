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
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
            int sum=0;
            int l=0,r=n-1;
            for(int i=0;i<n;i++)
                sum+=a[i];
            int ans=0;
            while(l<r)
            {
                if(sum%k!=0)
                {
                    ans=r-l+1;
                    break;
                }
                else
                {
                    if((sum-a[l])%k!=0)
                    {
                        sum-=a[l];
                        l++;
                    }
                    else if((sum-a[r])%k!=0)
                    {
                        sum-=a[r];
                        r--;
                    }
                    else
                    {
                        sum=sum-a[l]-a[r];
                        l++;
                        r--;
                    }
                    
                }
            }
            if(ans==0)
                ans=-1;
            cout<<ans<<endl;
    }
    
   
    
}
