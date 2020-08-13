#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count[256]={0};
	string s;
	cin>>s;
	int c=0;
	for(int i=0;i<s.length();i++)
	{
		if(i%2==0)
		{
			count[s[i]]++;
		}
		else
		{
			if(count[s[i]+32]>0)
				count[s[i]+32]--;
			else
				c++;
		}
	}
	cout<<c<<endl;
}