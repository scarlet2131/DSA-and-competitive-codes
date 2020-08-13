#include<bits/stdc++.h>
using namespace std;
int findPar(int x, int par[])
{
    while(x!=par[x])
    {
        x=par[x];
    }
    return x;
}
bool samePar(int x,int y, int par[])
{
    return findPar(x,par) == findPar(y,par);
}
int dounion(int x,int y, int par[], int size[])
{
    if(samePar(x,y,par))
        return -1;
    int p1= findPar(x,par);
    int p2= findPar(y,par);
    int s1= size[p1];
    int s2= size[p2];
    if(s1>s2)
    {
        par[p2]=p1;
        size[p1]+=s2;
    }
    else
    {
        par[p1]=p2;
        size[p2]+=s1;
    }
    return 1;
    
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string before="";
        string after="";
        string a[n];
        string b[n];
        map<string,int> g;
        int c=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            g[a[i]]=c;
            c++;
            
        }
        // for(auto itx=g.begin();itx!=g.end();itx++)
        // {
        //     cout<<itx->first<<" "<<itx->second<<endl;
        // }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }

        int par[n+1],size[n+1];
        for(int i=0;i<n;i++)
        {
            par[i]=i;
            size[i]=1;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                auto it= g.find(a[i]);
                auto itr= g.find(b[i]);
                dounion(it->second,itr->second,par,size);
            }
                
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            // cout<<par[i]<<endl;
            if(par[i]==i and size[i]>1)
            { 
                // cout<<"i "<<i<<" "<<size[i]<<endl;
                ans+=size[i]-1;
            }
        }

        cout<<ans<<endl;
        
    }
}