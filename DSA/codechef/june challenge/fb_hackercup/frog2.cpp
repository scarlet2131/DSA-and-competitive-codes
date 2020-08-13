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
		if(n>3)
		{
			if(c1>=2 && c1<n-1)
			{
				cout<<"Case"<<" "<<"#"<<j+1<<":"<<" "<<"Y"<<endl;
			}
			else
			{
				cout<<"Case"<<" "<<"#"<<j+1<<":"<<" "<<"N"<<endl;
			}
		}
		else if(n==3)
		{
			if(c1>=1 && c1<n-1)
			{
				cout<<"Case"<<" "<<"#"<<j+1<<":"<<" "<<"Y"<<endl;
			}
			else
			{
				cout<<"Case"<<" "<<"#"<<j+1<<":"<<" "<<"N"<<endl;
			}
		}
		else
		{
			cout<<"Case"<<" "<<"#"<<j+1<<":"<<" "<<"N"<<endl;
		}
		
	}
}