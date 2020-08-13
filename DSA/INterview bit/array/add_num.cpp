#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector <int> p;
	int input;
	cin>>input;
	int vp;
	
	for(int i=0;i<input;i++)
	{
		cin>>vp;
		p.push_back(vp);
	}
	int n=p.size();
	vector <int> d;
	int k=1;
	int sum=0;
	for(int i=n-1;i>=0;i--)
	{
		sum+=k*p[i];
		k=k*10;
		cout<<sum<<"s"<<endl;
	}
	cout<<sum+1<<endl;
}
