#include<bits/stdc++.h>
using namespace std;
int find_parent(int x,vector<int>& parent)
{
    while(parent[x]!=x)
    {
        x=parent[x];
    }
    return x;
}
bool same_parent(int x,int y,vector<int>& parent)
{
    return find_parent(x,parent)==find_parent(y,parent);
}
int do_union(int x,int y,vector<int>& parent)
{
    if(same_parent(x,y,parent))
        return -1;
    int l = find_parent(x,parent);
    int r = find_parent(y,parent);
    if(parent[l]>parent[r])
    {
        parent[r]=l;
    }
    else
    {
        parent[l]=r;
    }
    

}
int main()
{
    int n,m;
    cin>>n>>m;
    int x,y;
    vector<int> parent(n+1,0);
    for(int i=1;i<n+1;i++)
    {
        parent[i]=i;
    }
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        do_union(x,y,parent);
    }
    // for(int i=1;i<n+1;i++)
    // {
    //     cout<<parent[i]<<" ";
    // }
    // cout<<endl;
    int q;
    cin>>q;
    int g,h;
    for(int i=0;i<q;i++)
    {
        cin>>g>>h;
        int res=find_parent(g,parent);
        int ges=find_parent(h,parent);
        if(parent[res]>parent[ges])
        {
            cout<<g<<endl;
        }
        else if(parent[res]==parent[ges])
        {
            cout<<"TIE"<<endl;
        }
        else
        {
            cout<<h<<endl;
        }
        
    }

}