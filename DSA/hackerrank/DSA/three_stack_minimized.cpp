#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a[n1];
    int b[n2];
    int c[n3];
    int c1[100]={0};
    int c2[100]={0};
    int c3[100]={0};
    int ans=0;
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
     for(int i=0;i<n3;i++)
    {
        cin>>c[i];
    }
    int sum1=0,sum2=0,sum3=0;
    for(int i=n1-1;i>=0;i--)
    {
        sum1+=a[i];
        a[i]=sum1;
        c1[a[i]]++;
    }
    for(int i=n2-1;i>=0;i--)
    {
        sum2+=b[i];
        b[i]=sum2;
        c2[b[i]]++;
    }
    for(int i=n3-1;i>=0;i--)
    {
        sum3+=c[i];
        c[i]=sum3;
        c3[c[i]]++;
    }
    
    // for(int i=0;i<100;i++)
    // {
    //     cout<<c1[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<100;i++)
    // {
    //     cout<<c2[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<100;i++)
    // {
    //     cout<<c3[i]<<" ";
    // }
    // cout<<endl;
    for(int i=0;i<100;i++)
    {
        c1[i]=c1[i]+c2[i]+c3[i];
    }
    // for(int i=0;i<100;i++)
    // {
    //     cout<<c1[i]<<" ";
    // }
    // cout<<endl;
    for(int i=99;i>=0;i--)
    {
        if(c1[i]==3)
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}
