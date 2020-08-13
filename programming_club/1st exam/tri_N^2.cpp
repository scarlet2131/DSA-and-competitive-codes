#include <bits/stdc++.h>

using namespace std;


int flatlandSpaceStations(int n, vector<int> c) {
    int max = 0;
    vector<int> m;
    sort(c.begin(),c.end());
    for(int i=0;i<n;i++)
    {
        max = INT_MAX;
        for(int j=0;j<c.size();j++)
        {
            if(abs(i-c[j]) < max)
                max = abs(i-c[j]);
        }
        m.push_back(max);
    }
    sort(m.begin(),m.end());
    return m[m.size()-1];

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m; 
        cin >> n >> m;
        vector<int> v;
        for(int i=0;i<m;i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int ans = flatlandSpaceStations(n,v);
        cout << ans << endl;
    }
}
