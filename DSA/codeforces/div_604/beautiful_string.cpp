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
		int f=0;
		for(int i=0;i<s.length()-1;i++)
		{
			if(s[i]==s[i+1] && s[i]!='?')
			{
				f=1;
				break;
			}
		}
		
		int n= s.length();

			if(f!=1)
			{
				if(s[0]=='?')
				{
					if(s[1]=='a')
					{
						s[0]='b';
					}
					else if(s[1]=='b')
					{
						s[0]='c';
					}
					else 
					{
						s[0]='a';
					}
				}
				if(s[n-1]=='?')
				{
					if(s[n-2]=='a')
					{
						s[n-1]='b';
					}
					else if(s[n-2]=='b')
					{
						s[n-1]='c';
					}
					else 
					{
						s[n-1]='a';
					}
				}
				
					for(int i=1;i<s.length()-1;i++)
					{
						if(s[i]=='?')
						{
							if((s[i-1]=='a' && s[i+1]=='b') || (s[i-1]=='b' && s[i+1]=='a'))
							{
								s[i]='c';
							}
							else if((s[i-1]=='b' && s[i+1]=='c') || (s[i-1]=='c' && s[i+1]=='b'))
							{
								s[i]= 'a';
							}
							else  if((s[i-1]=='c' && s[i+1]=='a') || (s[i-1]=='a' && s[i+1]=='c'))
							{
								s[i]='b';
							}
							else  if((s[i-1]=='a' && s[i+1]=='?') || (s[i-1]=='?' && s[i+1]=='a'))
							{
								s[i]='b';
							}
							else  if((s[i-1]=='b' && s[i+1]=='?') || (s[i-1]=='?' && s[i+1]=='b'))
							{
								s[i]='c';
							}
							else  if((s[i-1]=='c' && s[i+1]=='?') || (s[i-1]=='?' && s[i+1]=='c'))
							{
								s[i]='b';
							}
							else  if(s[i-1]=='a' && s[i+1]=='a')
							{
								s[i]='b';
							}
							else  if(s[i-1]=='b' && s[i+1]=='b') 
							{
								s[i]='c';
							}
							else  if(s[i-1]=='c' && s[i+1]=='c') 
							{
								s[i]='a';
							}
						}

					}
				
			}


		if(f==1)
		{
			cout<<"-1"<<endl;
		}
		else 
		{	
						cout<<s<<endl;
		}

	}
}