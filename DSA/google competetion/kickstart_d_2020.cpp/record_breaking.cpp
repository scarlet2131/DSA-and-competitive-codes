#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    for(int t=0;t<k;t++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int c=0;
        if(n==1)
        {
            cout<<"Case #"<<t+1<<": "<<1<<endl;
        }
        else
        {
          
            int m=-1;
            for(int i=0;i<n;i++)
            {
                if(i==0)
                {
                    if(a[1]<a[0])
                    {
                        c++;
                    }
                }
                else if(i==n-1)
                {
                    if(a[i]>m)
                    {
                        c++;
                    }
                }
                else 
                {
                    
                    if(a[i]>m and a[i+1]<a[i])
                    {
                        c++;
                    }
                 
                    
                }
                m= max(m,a[i]);
            }
            cout<<"Case #"<<t+1<
            <": "<<c<<endl;
        }
        
        
      
        
    }
}