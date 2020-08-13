
//  same for bfs nd dfs jst use stack instead for dfs
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
        int x,y;
        vector<vector<int> > v;
        vector<bool> vis(n,false);
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
           
        }
        queue<int> q;
        q.push(v[0][0]);
        while(!q.empty())
        {
            int cur=q.front();
            q.pop();
            for(auto x:adj[cur])
                if(vis[x]==false)
                {
                    q.push(x);
                    vis[x]=true;
                }
                     
        }
       
    }
}