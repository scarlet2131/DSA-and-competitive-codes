#include<iostream>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int z[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            z[i]=a[i];
        }
        sort(z,z+n);
        queue<int> b;
        for(int i=n-1;i>=0;i--)
        {
            b.push(z[i]);
        }
        map<int,int> g;
        for(int i=0;i<n;i++)
        {
            g[a[i]]=1;
            if(b.size() > 0 and a[i]==b.front())
            {
                while(1)
                {
                    if (b.size()==0)
                    {
                         break;
                    }
                   
                    int  x = b[0];
                if (g.find(x)==g.end())
                {

                    break;
                }
                else
                {
                    cout<<x;
                    b.pop()
                }
                    
                }
                
            cout<<endl;
            }
           
            else
            {

                cout<<"Not possible"<<endl;
            }
        }
    }
	return 0;
}