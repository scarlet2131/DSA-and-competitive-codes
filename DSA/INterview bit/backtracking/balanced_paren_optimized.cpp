#include<bits/stdc++.h>
using namespace std;

void valid_paren(string ans,int o,int c,int n,int &count)
{
	count++;
	if(ans.length()==2*n)
	{
		cout<<ans<<endl;
		return;
	}
	else
	{
		if(o<n)
		{
			ans+="(";
			valid_paren(ans,o+1,c,n,count);
			ans.pop_back();
		}
		if(c<o)
		{
			ans+=")";
			valid_paren(ans,o,c+1,n,count);
			ans.pop_back();
		}
	}
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int count=0;

		int n;
		cin>>n;
		string ans="";
		
		valid_paren(ans,0,0,n,count);
		cout << count << endl;
	}
}
