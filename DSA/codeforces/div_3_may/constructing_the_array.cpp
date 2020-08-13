#include<bits/stdc++.h>
using namespace std;
struct comp
{
    bool operator()(pair<int,pair<int,int>> a,pair<int,pair<int,int>> b)
    {
        int l1=a.first,l2=b.first;
        int x=a.second.first,y=b.second.first;
        return l1<l2  or (l1==l2 and x>y);   
    }
};
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
            a[i]=0;
        }
        priority_queue< pair<int,pair<int, int> >,vector<pair<int,pair<int, int> >>,comp> q;
        pair<int,int> x={0,n-1};
        q.push({n,x});
        int action=1;
        while(!q.empty())
        {
            pair<int,pair<int,int>> x=q.top();
            q.pop();
            // cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<endl;
            int l=x.first;
            if(l%2!=0)
            {
                int mid=x.second.first+(x.second.second-x.second.first+1)/2;
                a[mid]=action;
                if(mid-1>=x.second.first)
                    q.push({l/2,{x.second.first,mid-1}});
                if(mid+1<=x.second.second)
                    q.push({l/2,{mid+1,x.second.second}});
                
            }
            else
            {
                int mid=x.second.first+(x.second.second-x.second.first)/2;
                a[mid]=action;
                if(mid-1>=x.second.first)
                    q.push({l/2-1,{x.second.first,mid-1}});
                if(mid+1<=x.second.second)
                    q.push({l/2,{mid+1,x.second.second}});
             
            }
               action+=1;
            

        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;


    }
}