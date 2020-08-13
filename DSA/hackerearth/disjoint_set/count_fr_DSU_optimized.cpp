#include<bits/stdc++.h>
using namespace std;
int getPar(int x,int par[]){
    while(x!=par[x])
        x = par[x];
    return x;
}
int find(int x,int y,int par[])
{
    return getPar(x,par) == getPar(y,par);
}
int doUnion(int x,int y,int par[],int size[])
{
    if( find(x,y,par) )
        return -1;
    int p1 = getPar(x,par);
    int p2 = getPar(y,par);
    int s1 = size[p1];
    int s2 = size[p2];
    if( s1 > s2 )
    {
        par[p2] = p1;
        size[p1] += s2;
    }
    else
    {
        par[p1] = p2;
        size[p2] += s1;
    }
    return 1;
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
    int par[n+1],size[n+1];
        for(int i=1;i<=n;i++)
        {
            par[i] = i;
            size[i] = 1;
        }
    while(q--)
    {
        cin>>x>>y;
       doUnion(x,y,par,size);
    }
   
    // for(int i=0;i<=n;i++)
    // {
    //     if(parent[i]>0)
    //     {
    //         int z=find_p(i,parent);
    //         set_size[i]=abs(parent[z])-1;
    //     }
          
    //     else
    //         set_size[i]=abs(parent[i])-1;
    // }
    for(int i=1;i<=n;i++)
    {
        cout<<size[i]<<" ";
    }
    cout<<'\n';
   

   

}