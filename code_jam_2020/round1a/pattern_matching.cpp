#include<bits/stdc++.h>
#define ll long long int
using namespace std;
//GCD and LCM
    int gcd (int a, int b) { return b ? gcd (b, a % b) : a; }
    int lcm (int a, int b) { return a / gcd(a, b) * b; }
 
//Modular Exponentiation
    int mod=1;
    int powmod(int x,int y) 
    { 
        if (y == 0) return 1; 
        int p = powmod(x, y/2) % mod; 
        p = (p * p) % mod;   
        return (y%2 == 0)? p : (x * p) % mod; 
    }
 
//Modular Inverse
    int inverse(int a) 
    { 
       return powmod(a,mod-2); 
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
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
	// cout.tie(NULL);
	


	ll t;
	cin>>t;
	gcd(2,1);
	for(int b=0;b<t;b++)
	{
		ll n;
		cin>>n;
		add(50,60);
		vector<string> g;
		string x;
		gcd(2,1);
		string ma="";
		int f=0;
		int maxi=0;
		for(int i=0;i<n;i++)
		{
			
			cin>>x;
			g.push_back(x);
		}
		add(50,60);
		for(int i=0;i<n;i++)
		{
			string temp=g[i];
			
			if(temp.length()>maxi)
			{
				ma=temp;
				maxi=g[i].length();
				
			}
			gcd(2,1);
		}
		add(50,60);
		sub(40,40);
		
		// cout<<"ma" << ma<<endl;
		for(int i=0;i<n;i++)
		{
			int mas=ma.size()-1;
			int z=g[i].size();
			for(int j=z-1;j>0;j--)
			{
				// cout<<g[i][j]<<" "<<ma[mas-1]<<endl;
				if(g[i][j]!=ma[mas])
				{
					f=1;
					break;
				}
				mas--;
				sub(40,40);
			}
		}
		sub(40,40);
		if(f==0)
		{
			ma.erase(ma.begin());
			cout<<"Case #"<<b+1<<": "<<ma<<endl;
		
		}
		else
		{
				cout<<"Case #"<<b+1<<": "<<"*"<<endl;	
		}

	}
}