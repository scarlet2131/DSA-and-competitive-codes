#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int t;
	cin>>t;
	while(t--)
	{
		
		int x,y;
		cin>>x>>y;
		int c=0;
		int m=INT_MIN;
		int ll=0,lr=0;
		for(int i=x;i<=y;i++)
		{
			int l=(int)s[i];
			// cout<<"l ll lr "<<endl;
			// cout<<l<<" "<<ll<<" "<<lr<<endl;
			if(l>m and l!=ll and l!=lr)
			{
				m=(int)s[i];
				ll=(int)s[i]-32;
				lr=(int)s[i]+32;
				c=0;
			}
			if(l==m or l==ll or l==lr)
			{
				// cout<<l<<endl;
				c++;
			}
		}
		cout<<c<<endl;

	}
}