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
        int M=2*100000+1;
        int count[M]={0};
        for(int i=0;i<n;i++)
        {
            count[a[i]]++;
        }
        int m=INT_MIN;
        int k=0;
        for(int i=0;i<M;i++)
        {
            if(a[i]>m)
            {
                m=a[i];
                k=i;
            }
        }
        for(int i=0;i<)
    }
}