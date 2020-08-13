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
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		int c[n];
		int k=0;
		for(int i=0;i<n;i++)
		{
			
			k=a[i]*20-b[i]*10;
			if(k>0)
			{
				c[i]=k;
				k=0;
			}
			else 
			{
				c[i]=0;
			}
		}
		int max=-9999;
		for(int i=0;i<n;i++)
		{
			if(c[i]>max)
			{
				max=c[i];
			}
		}
		cout<<max<<endl;
	}
}