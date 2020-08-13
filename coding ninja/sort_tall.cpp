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
        vector<pair<int, int> > v;
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            c=0;
            for(int j=i+1;j<n;j++)
            {
                if(a[j]<a[i])
                {
                    c++;
                }
                else
                {
                    break;
                }
                
            }
            if(c!=n-i-1)
            {
                c++;
            }
            v.push_back(make_pair(c,i+1));
            c=0;
            
        }
        sort(v.begin(),v.end());
    //vector<int>::iterator ptr ;
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }
    int max=-9999;
    for(int i=v.size()-1;i>=0;i--)
    {
        for(int j=i-1;j>=0;j--)
        {
             if(v[i].first==v[j].first && v[j].second>v[i].second)
            {
                max=v[j].second;
            }
            else
            {
                max=v[v.size()-1].second;
            }
        }
       
    }
    cout<<max<<endl;
    }
}