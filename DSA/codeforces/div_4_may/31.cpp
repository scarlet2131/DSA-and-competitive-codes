#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool checkBit(int n,int i)
{
    return n&(1<<i);
}
int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    vector<vector<int> > v;
    vector<int> price;

    ll M = 1e12;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        price.push_back(x);
        vector<int> temp;
        for(int j=0;j<m;j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //         cout << v[i][j] << " ";
    //     cout << endl;
    // }
    // for(int i=0;i<n;i++)
    //     cout << price[i] <<  " ";
    // cout << endl;
    // cout << (1<<n) << endl;
    for(int i=1;i<(1<<n);i++)
    {
        int num = i;
        // cout << num << endl;
        vector<int> S;
        for(int j=0;j<n;j++)
        {
            // cout << num << " " << j << " " << checkBit(num,j) << endl;
            if( checkBit(num,j) ) 
            {
                
                S.push_back(j);
            }
                

        }
        if(S.size()>0)
        {
                // cout << num << endl;
                // for(int j=0;j<S.size();j++)
                //     cout << S[j] << " ";
                // cout << endl;
                vector<ll> sums;
                for(int j=0;j<m;j++)
                    sums.push_back(v[S[0]][j]);
                ll P = price[S[0]];
                // for(int j=0;j<m;j++)
                //     cout << sums[j] << " ";
                // cout << endl;
                for(int j=1;j<S.size();j++)
                {
                    P += price[S[j]];
                    for(int l=0;l<m;l++)
                    {
                        int cur = v[S[j]][l];
                        sums[l] += cur;
                        
                    }
                    
                }
                // for(int j=0;j<m;j++)
                //     cout << sums[j] << " ";
                // cout << endl;
                bool valid = true;
                for(int j=0;j<m;j++)
                {
                    if(sums[j]<k)
                    {
                        valid = false;
                        break;
                    }
                }
                // cout << P << endl;
                if(valid)
                    M = min(M,P);
                // cout << M << endl;
        }
        
    }
    if(M==1e12)
        M=-1;
    cout << M <<endl;
    
}