#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=n;
        int c=0;
        int f=0;
        while(x!=1)
        {
            if(x%6==0)
            {
                x/=6;
            }
            else if(x%3==0)
            {
                x=x*2;
            }
            else
            {
                f=1;
                break;
            }
            
            c++;
          
        }
        if(f==1)
            cout<<"-1"<<endl;
        else
            cout<<c<<endl;

    }
}