#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int c[128];
		for(int i=0;i<s.length();i++)
		{
			c[s[i]]++;
		}
		sort(c,c+128);
		int ans=0;
		int max=-9999;
		for(int i=0;i<128;i++)
		{
			if(c[i]>max)
			{
				max=c[i];
				ans=i;
			}
		}
		string sa=to_str(ans);
		cout<<sa<<endl;
	}
}