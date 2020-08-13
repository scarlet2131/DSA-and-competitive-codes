#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        int rem=floor(n/x);
        if(rem*x+y>n)
            rem--;
        int z=rem*x;
        if(z+y>n)
        {
            cout<<z-y<<endl;
        }
        else
        {
            cout<<z+y<<endl;
        }
        
    }
}