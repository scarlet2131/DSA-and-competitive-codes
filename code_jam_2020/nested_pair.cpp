#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string s;
		cin>>s;
		string s1="";
		for(int j=0;j<s.length();j++)
		{
			int k=s[j]-'0';
			while(k>0)
			{
				s1+="(";
				k--;
			}
			s1+=s[j];
			k=s[j]-'0';
			while(k>0)
			{
				s1+=")";
				k--;
			}
		}
		stack<char> g;
		// cout<<"1"<<endl;
		for(int j=0;j<s1.length();j++)
		{
			if(s1[j]=='(')
			{
				if(!g.empty() and g.top()==')')
				{
					g.pop();
				}
				else
				{
					g.push(s1[j]);
				}
			}
			else
			{
				g.push(s1[j]);
			}
		}
		// cout<<"2"<<endl;
		// cout<<"sie "<<g.size()<<endl;
		string s2="";
		while(!g.empty())
		{
			s2+=g.top();
			g.pop();
		}
		// cout<<"3"<<endl;
		string s3="";
		for(int j=s2.length()-1;j>=0;j--)
		{
			s3+=s2[j];
		}

		cout<<"Case #"<<i+1<<": "<<s3<<endl;
	}
}