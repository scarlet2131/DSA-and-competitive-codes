#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
	
		ll a,b,c;
	cin>>a>>b>>c;
	ll c1=a+c;
	ll c2=b+c;
	if(c1==c2 || c1+1==c2 || c2+1==c1)
	{
		cout<<c1+c2<<endl;
	}
	else
	{
		if(c1>c2)
		{
			cout<<c2*2+1<<endl;
		}
		else
		{
			cout<<c1*2+1<<endl;
		}
	}
	
	
}