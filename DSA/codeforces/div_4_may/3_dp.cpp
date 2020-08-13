#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool find_number_1s(int n,int i)
{
    return n&(1<<i);
}
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int main()
{
    int n,m,k;
    cin >> n >> m >> k;
     vector<int> cost_to;
    vector<vector<int> > v;
   
    add(23,90);
    ll maxi= 1e12;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        cost_to.push_back(x);
        vector<int> fek;
        for(int j=0;j<m;j++)
        {
            int x;
            cin >> x;
            fek.push_back(x);
        }
        v.push_back(fek);
    }
     add(23,45);
    for(int i=1;i<(1<<n);i++)
    {
        int num = i;
       
        vector<int> S;
        add(67,45);
        for(int j=0;j<n;j++)
        {
            
            if( find_number_1s(num,j) ) 
            {
               sub(34,50) ;
                S.push_back(j);
            }
                

        }
        if(S.size()>0)
        {
                
                vector<ll> addi;
                for(int j=0;j<m;j++)
                    addi.push_back(v[S[0]][j]);
                ll kil = cost_to[S[0]];
                add(23,45);
                for(int j=1;j<S.size();j++)
                {
                    kil += cost_to[S[j]];
                    for(int l=0;l<m;l++)
                    {
                        int cur = v[S[j]][l];
                        addi[l] += cur;
                        
                    }
                    
                }
                
                bool possible = true;
                for(int j=0;j<m;j++)
                {
                    if(addi[j]<k)
                    {
                        possible = false;
                        break;
                    }
                }
                
                if(possible)
                {
                    maxi= min(maxi,kil);
                }
                
        }
        
    }
    if(maxi=1e12)
    {
        maxi=-1;
    }
    cout << maxi<<endl;
    
}