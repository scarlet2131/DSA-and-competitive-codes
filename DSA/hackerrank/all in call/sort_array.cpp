#include<bits/stdc++.h>
using namespace std;
int find_par(int x,int par[])
{
    while(x!=par[x])
    {
        x=par[x];
    }
    return x;
}
bool same_parent(int x,int y,int par[])
{
    return find_par(x,par) == find_par(y,par);
}
int dounion(int x, int y, int par[], int size[])
{
    if(same_parent(x,y,par))
        return -1;
    int p1= find_par(x,par);
    int p2= find_par(y,par);
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
    int n;
    cin>>n;
    vector<int> a;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;  
        a.push_back(x);
    }
    string s;
    cin>>s;
    int par[n+1],size[n+1];
    for(int i=0;i<n+1;i++)
    {
        par[i]=i;
        size[i]=1;
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
             int z = dounion(i+1,i+2,par,size);
        }
    }
    bool f=true;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=i+1)
        {
            if(same_parent(i+1,a[i],par)==false)
            {
                f=false;
                break;
            }
        }
    }
    if(f) cout<<"YES\n";
    else cout<<"NO\n";



}