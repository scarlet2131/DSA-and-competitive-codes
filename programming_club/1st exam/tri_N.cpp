#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
            int n,m;
            cin >> n >> m;
            map<int,int> mp;
            for(int i=0;i<m;i++)
            {
                int x;
                cin >> x;
                mp[x] = 1;
            }
        //     find left distances
            int dpL[n] = {0};
            if( mp.find(0)!=mp.end() )
                dpL[0] = 0;
            else dpL[0] = INT_MAX;
            for(int i=1;i<n;i++)
            {
                if( mp.find(i) != mp.end() )
                    dpL[i] = 0;
                else dpL[i] = dpL[i-1] + 1;
            }
            
        // find right distances
            int dpR[n] = {0};
            if( mp.find(n-1)!=mp.end() )
                dpR[n-1] = 0;
            else dpR[n-1] = INT_MAX;
            for(int i=n-2;i>=0;i--)
            {
                if( mp.find(i) != mp.end() )
                    dpR[i] = 0;
                else dpR[i] = dpR[i+1] + 1;
            }
            
            int M = 0;
            for(int i=0;i<n;i++)
            {
                M = max(M,min(dpL[i],dpR[i]));
            }
            cout << M << endl;
    }
    
    
}