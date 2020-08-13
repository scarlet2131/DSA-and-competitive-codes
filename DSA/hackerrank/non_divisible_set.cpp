#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int count[k]={0};
	for(int i=0;i<n;i++)
	{
		count[a[i]%k]++;
	}
	// for(int i=0;i<k;i++)
	// {
	// 	cout<<count[i]<<" ";
	// }
	int c=0;
	if(k%2==0)
	{
		if(count[0]>0)
		{
			c++;
		}
		if(count[n/2]>0)
		{
			c++;
		}
		for(int i=1;i<k/2;i++)
		{
			if(i!=n/2)
			{
				c+=max(count[i],count[k-i]);
			}
		}
	}
	else
	{
		if(count[0]>0)
		{
			c+=1;
		}
		for(int i=1;i<=k/2;i++)
		{
			c+=max(count[i],count[k-i]);
		}
	}
	cout<<c<<endl;
}