#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string a="aeiou";
		string s;
		cin>>s;
		int f=0;
		int k=0;
		for(int i=0;i<s.length();i++)
		{
			for(int j=0;j<5;j++)
			{
				if(s[i]!=a[j] && s[i+1]==a[j])
				{
					k++;
					
				}
			}
		}
		
			cout<<k<<endl;
		
		
		

	}
}