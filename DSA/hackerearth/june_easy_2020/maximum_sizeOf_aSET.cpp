#include<bits/stdc++.h>
using namespace std;

  
void dfs(int i,vector<bool>& vis, vector<int> adj[],int dp[] )
{
    vis[i]=true;
   
    for(int j=0;j<adj[i].size();j++)
    {
        if(!vis[adj[i][j]])
        {
            
            dfs(adj[i][j],vis,adj,dp);
        }
        dp[i]=max(dp[i],1+dp[adj[i][j]]);
           
    }
    return;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n + 1]; 
   
    int x,y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
    
    }
    int dp[n+1]={0};
    vector<bool> vis(n+1,false);
    for(int i=1;i<=n;i++)
    {  
          
            dfs(i,vis,adj,dp);       
    }
    // for(int i=0;i<n+1;i++)
    // {
    //     cout<<dp[i]<<" ";
    // }
    cout<<endl;
   int ans=*max_element(dp,dp+n);
   cout<< ans+1<<endl;
 
  
    
}
