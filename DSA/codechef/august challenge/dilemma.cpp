#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		// cout<<s.length();
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='1')
			{
				s[i]='9';
				if(i-1>0)
				{
					if(s[i-1]=='0')
					{
						s[i-1]='1';
					}
					else if(s[i-1]=='1')
					{
						s[i-1]='0';
					}
				}
				
				if(i+1<s.length())
				{
					if(s[i+1]=='0')
					{
						s[i+1]='1';
					}
					else if(s[i+1]=='1')
					{
						s[i+1]='0';
					}
				}
				// for(int j=0;j<s.length();j++)
				// {
				// 	cout<<s[j];
				// }
			}
		}
		int f=0;
		// for(int i=0;i<s.length();i++)
		// {
		// 	cout<<s[i]<<" ";
		// }
		// cout<<endl;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]!='9')
			{
				f=1;
			}
			else
			{
				f=0;
			}
		}
		if(f==1)
		{
			cout<<"LOSE"<<endl;
		}
		else
		{
			cout<<"WIN"<<endl;
		}
	}
}