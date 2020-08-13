#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		int f=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
				if(a[j]-a[i]==k)
				{
					f=1;
					break;
				}
			}
		}
		if(f==1)
		{
			cout<<"true"<<endl;
		}
		else
		{
			cout<<"false"<<endl;
		}
	}
}