#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int add(int x,int y)
{
    return x+y;
}
int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
        ll a,b,n,m;
        cin >> a >> b>> n >> m;
        add(56,89);
        if(a==0 and b==0)
            cout << "No\n";
        else if(a==0 or b==0)
        {
            if(a==0)
            {
                if(m>0)
                    cout << "No\n";
                else {
                    if(b>=n)
                        cout << "Yes\n";
                    else cout << "No\n";
                }
            }
            else if(b==0)
            {
                if(m>0)
                    cout << "No\n";
                else{
                    if(a>=n)
                        cout << "Yes\n";
                    else cout << "No\n";
                
                }
                
            }
        }
            
        else{
            if( (a+b)>=(n+m) )
            {
                if(min(a,b)<m)
                    cout << "No\n";
                else
                    cout << "Yes\n";
            }
                
            
            else cout << "No\n";
        }
    }
        
}