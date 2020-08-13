#include<bits/stdc++.h>
using namespace std;
int find_parent(int x,vector<int>& parent)
{
    while(parent[x]>0)
    {
        x=parent[x];
    }
    return x;
}
bool same_parent(int x,int y,vector<int>& parent)
{
    return find_parent(x,parent)==find_parent(y,parent);
}
void do_union(int x,int y,vector<int>& parent)
{
   
    if(same_parent(x,y,parent))
        return;
    int l=find_parent(x,parent);
    int r=find_parent(y,parent);
    parent[r]=l;
}
int main()
{
    int t;
    cin>>t;
    int n;
    cin>>n;
    int x,y;
    vector<int> parent(t+1,0);
    for(int i=1;i<t+1;i++)
    {
        parent[i]=-i;
    }
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        do_union(x,y,parent);
    }
    int c=0;
    for(int i=1;i<t+1;i++)
    {
        if(parent[i]<0)
        {
            c++;
        }
    }
    // for(int i=1;i<t+1;i++)
    // {
    //     cout<<parent[i]<<" ";
    // }
    // cout<<endl;
    cout<<c<<endl;
}