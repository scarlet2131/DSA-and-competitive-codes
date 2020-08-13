#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x,y;
    vector<pair<int,int>> g;
    for(int i=0;i<n-1;i++)
    {
        cin>>x>>y;
        g.push_back({x,y});
    }
    priority_queue<vector<int>> q;
    map<int,int> degree;
    int d;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        degree[i+1]=d;

    }
 
    for(int i=0;i<g.size();i++)
    {
        vector<int> temp;
        int max_deg=abs(degree[g[i].first]-degree[g[i].second]);
        temp.push_back(max_deg);
        temp.push_back(i+1);
        temp.push_back(g[i].first);
        temp.push_back(g[i].second);
        q.push(temp);
    }
    int sd;
    map<int,int> deleted;
    for(int i=0;i<n-1;i++)
    {
      
        cin>>sd;
        deleted[sd]=1;
        int ans=0;
        vector<int> temp = q.top();
        if(temp[1]==sd )
        {
            q.pop();
        }
        while(deleted.find(q.top()[1])!=deleted.end())
        {
            q.pop();
        }
        vector<int> present = q.top();
        if(q.size()>0)
        {
            cout<<"pprr  "<<present[2]<<" "<<present[3]<<endl;
             ans=present[0];
        }
        cout<<ans<<endl;
        
    }
}