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
    int n,m;
    cin>>n>>m;
    int x,y;
    vector<int> par(n+1,0);
    vector<int> size(n+1,1);
    for(int i=0;i<n+1;i++)
    {
        par[i]=i;
    }
    int f=0;
    for(int i=0;i<m;i++)
    {
         cin>>x>>y;
        int z = do_union(x,y,par,size);
        if(z==-1)
        {
           f=1;
        }
    }
    int c=0;
    for(int i=1;i<n+1;i++)
    {
        cout<<par[i]<<" ";
        if(par[i]==i)
        {
            c++;
        }
    }
    cout<<endl;
   
   if(f==1 and c==0)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
   

}