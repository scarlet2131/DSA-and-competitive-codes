#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		string s;
		cin>>s;
		int c1=0;
		int n=s.length();
		for(int i=0;i<n;i++)
		{
			if(s[i]=='B')
			{
				c1++;
			}

		}
		if(c1>=ceil(float((n-1)/2.0)) && c1<n-1)
		{
			cout<<"Case"<<" "<<"#"<<j+1<<":"<<" "<<"Y"<<endl;
		}
		else
		{
			cout<<"Case"<<" "<<"#"<<j+1<<":"<<" "<<"N"<<endl;
		}
	}
}