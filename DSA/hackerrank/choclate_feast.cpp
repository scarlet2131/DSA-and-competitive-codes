#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c,m;
		cin>>n>>c>>m;
		int ans=n/c;
		int l=ans;
		while(l>=m)
		{
			// cout<<l<<" l "<<endl;
			ans+=l/m;
			// cout<<ans<<" ans "<<endl;
			l=l%m+l/m;
			
		}
		cout<<ans<<endl;
	}
}