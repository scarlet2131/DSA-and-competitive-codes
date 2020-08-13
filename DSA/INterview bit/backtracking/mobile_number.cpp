#include<bits/stdc++.h>
using namespace std;
void mobile(string n,map<int,string > v,string ans,int level)
{
	if(level>=n.length())
	{
		cout<<ans<<endl;
		return;
	}
	string temp = v[n[level]-'0'];
	for(int i=0;i<temp.length();i++)
	{
		
		
		mobile(n,v,ans+temp[i],level+1);
		



	}
	

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string n;
		cin>>n;
		string ans="";
		map<int,string> v;
		v[2]="abc";
		v[3]="def";
		v[4]="ghi";
		v[5]="jkl";
		v[6]="mno";
		v[7]="pqrs";
		v[8]="tuv";
		v[9]="wxyz";
		mobile(n,v,ans,0);
	}
}