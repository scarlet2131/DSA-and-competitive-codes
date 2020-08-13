#include<bits/stdc++.h>
using namespace std;
int valid(int a[],int n,int mid,int k)
{
	int rem[n];
	for(int i=0;i<n;i++)
	{
		rem[i]=a[i]%k;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int l=1;
		int r=n;
		while(l<=r)
		{
			int mid=(l+r)/2;
			if(valid(mid)==1)
			{
				ans=mid;
				r=mid-1;
			}
			else
			{
				l=mid+1;
			}
		}

	}
}