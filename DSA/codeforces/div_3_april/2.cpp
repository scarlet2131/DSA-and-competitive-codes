#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b;
		cin>>n>>a>>b;
		string ans="";
		string s="abcdefghijklmnopqrstuvwxyz";
		int i=0;
		while(i<n)
		{
			if(i+b<n)
			{
				for(int j=i;j<i+b;j++)
				{
					ans+=s[j-i];
				}
				i+=b;
			}
			else
			{
				for(int j=i;j<n;j++)
				{
					ans+=s[j-i];
				}
				i=n;
			}
			
		}
		cout<<ans<<endl;
	}
}