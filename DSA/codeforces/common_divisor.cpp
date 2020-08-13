#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,r;
	cin>>s>>r;
	vector<int> da;
	vector<int> db;
	int n=s.length();
	while(n>0)
	{
		if(s.length()%n==0)
		{
			da.push_back(n);
		}
		n--;
	}
	int m=r.length();
	while(m>0)
	{
		if(r.length()%m==0)
		{
			db.push_back(m);
		}
		m--;
	}
	n=s.length();
	m=r.length();
	int c=0;
	// for(int i=0;i<da.size();i++)
	// {
	// 	cout<<da[i]<<" ";
	// }
	// cout<<endl;
	// for(int i=0;i<db.size();i++)
	// {
	// 	cout<<db[i]<<" ";
	// }
	// cout<<endl;
	for(int i=0;i<da.size();i++)
	{
		int x=da[i];
		// cout<<x<<endl;
		string temp="";
		for(int j=0;j<x;j++)
		{
			temp+=s[j];
		}
		// cout<<temp<<endl;
		string z=temp;
		while(z.length()<n)
		{
			z+=temp;
		}
		string y =temp;
		while(y.length()<m)
		{
			y+=temp;
		}
		if(z==s and y==r)
		{
			c++;
		}
	}
	cout<<c<<endl;


}