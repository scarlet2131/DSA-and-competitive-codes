#include<bits/stdc++.h>
using namespace std;
int find_parent(int x,vector<int>& par)
{
    while(par[x]!=x)
    {
        x=par[x];
    }
    return x;
}
bool same_parent(int x,int y,vector<int>& par)
{
    return find_parent(x,par)==find_parent(y,par);
}
int do_union(int x,int y,vector<int>& par,vector<int>& size)
{
    if(same_parent(x,y,par))
        return -1;
    int xp = find_parent(x,par);
    int yp = find_parent(y,par);
    int sl=size[xp];
    int sr=size[yp];
    if(sl>sr)
    {
        par[yp]=xp;
        size[xp]+=size[yp];
    }
    else
    {
        par[xp]=yp;
        size[yp]+=size[xp];
    }
    return 1;
    

}
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int s;
    cin>>s;
    vector<int> par(n+1,0);
    vector<int> size(n+1,1);
    for(int i=0;i<n+1;i++)
    {
        par[i]=i;
    }
    int x,y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        do_union(x,y,par,size);
    }
    int q;
    cin>>q;
    int s2;
    cin>>s2;
  
    for(int i=0;i<q;i++)
    {
        int component=0;
        cin>>x>>y;
        do_union(x,y,par,size);
        for(int i=1;i<n+1;i++)
        {
            if(par[i]==i)
            {
                component++;
            }
        }
        cout<<component-1<<" ";
    }
    cout<<endl;
}