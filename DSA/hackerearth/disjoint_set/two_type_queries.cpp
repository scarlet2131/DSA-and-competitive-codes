#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
      string s;
        cin>>s;
        int n=s.length();
        map<pair<char,char>,int> g;
        int ans=0;
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1])
            {
                 auto it= g.find(make_pair(s[i],s[n-i-1]));
                auto itr=g.find(make_pair(s[n-i-1],s[i]));
                if(itr==g.end() and it==g.end())
                {
                    g[{s[i],s[n-i-1]}]=1;
                    
                }
                else if(itr!=g.end())
                {
                    g[{s[n-i-1],s[i]}]++;
                }
                else if(it!=g.end())
                {
                    g[{s[i],s[n-i-1]}]++;   
                }
                ans++;
            
            }
           
        }
        int q;
        cin>>q;
        int a;
        while(q--)
        {
            cin>>a;
            char x,y;
            if(a==1)
            {
                cin>>x>>y;
                auto it= g.find(make_pair(x,y));
                auto itr=g.find(make_pair(y,x));
                if(it!=g.end())
                {
                    ans-=it->second;
                    
                }
                else if(itr!=g.end())
                {
                    ans-=itr->second;
                    
                }


            }
            else
            {
                cout<<ans<<endl;
            }
            
        }
    
}