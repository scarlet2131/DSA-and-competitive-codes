#include<bits/stdc++.h>
#define ll long long int
using namespace std;
char find_parent(char x,vector<char>& par)
{
    while(par[x%97]!=x)
    {
        x=par[x%97];
    }
    return x;
}


bool same_parent(char x,char y, vector<char>& par)
{
    return find_parent(x,par)==find_parent(y,par);
}
void do_union(char x,char y,vector<char>& par,vector<ll>& size)
{
    if(same_parent(x,y,par))
        return;
    char l=find_parent(x,par);
    char r=find_parent(y,par);
    // cout<<"l r : "<<l<<" "<<r<<" xy "<<x<<" "<<y<<endl;
    if(par[l%97]>par[r%97])
    {
        par[l%97]=r;
    }
    else
    {
        par[r%97]=l;   
    }
    
    
}
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    vector<char> par(26,'a');
    vector<ll> size(26,1);
    for(ll i=0;i<26;i++)
    {
        par[('a'+ i)%97] =char('a'+i);
    }
    for(ll i=0;i<a.length();i++)
    {
        do_union(a[i],b[i],par,size);
    }
    // for(ll i=0;i<26;i++)
    // {
    //     cout<<par[i]<<" ";
    // }
    string ans="";
    for(ll i=0;i<c.length();i++)
    {
            char present = find_parent(c[i],par);
            if(present<c[i])
            {
                ans+=present;
            }
            else
            {
                ans+=c[i];
            }
        
    }
    cout<<ans<<endl;


}