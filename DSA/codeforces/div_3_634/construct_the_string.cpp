#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        string s="";
        for(int i=0;i<b;i++)
        {
            s+='a'+i;
        }
        // cout<<s<<endl;
        for(int i=b;i<a;i++)
        {
            s+=s[i-b];
        }
        // cout<<s<<endl;
        for(int i=a;i<n;i++)
        {
            s+=s[i-a];
        }
        cout<<s<<endl;
    }
}