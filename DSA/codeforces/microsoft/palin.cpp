#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int c=0,f=0;
	string a;
	
		cin>>a;
	
	for(int i=0;i<n;i++)
	{
		if(a[i]!=a[n-1-i])
		{
			f=1;
		}

	}
	if(f==1)
	{
		cout<<"0"<<endl;
	}
	else
	{
		cout<<"1"<<endl;
	}
	
}