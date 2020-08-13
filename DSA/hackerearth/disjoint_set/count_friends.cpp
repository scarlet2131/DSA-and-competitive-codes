#include<bits/stdc++.h>
using namespace std;
int find_p(int x,vector<int>& parent)
{
    while(parent[x]>0)
    {
        x=parent[x];
    }
    return x;
}
bool par(int x,int y,vector<int>& parent)
{
   return find_p(x,parent)==find_p(y,parent);
}
void do_union(int x,int y,vector<int>& parent)
{
    if(par(x,y,parent))
        return;
    int l=find_p(x,parent);
    int r=find_p(y,parent);
    if(abs(l)>abs(r))
    {
        parent[l]-=abs(parent[r]);
        parent[r]=l;
 
    }
    else
    {
        parent[r]-=abs(parent[l]);
        parent[l]=r;
    }
   
    
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int q=m;
    int x,y;
    vector<int> parent(n+1,-1);
    vector<int> set_size(n+1,1);
    while(q--)
    {
        cin>>x>>y;
       do_union(x,y,parent);
    }
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<parent[i]<<" ";
    // }
    // cout<<endl;
    for(int i=0;i<=n;i++)
    {
        if(parent[i]>0)
        {
            int z=find_p(i,parent);
            set_size[i]=abs(parent[z])-1;
        }
          
        else
            set_size[i]=abs(parent[i])-1;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<set_size[i]<<" ";
    }
    cout<<'\n';
   
 
   
 
}
