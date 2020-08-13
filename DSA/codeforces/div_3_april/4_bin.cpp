#include<bits/stdc++.h>
using namespace std;
bool valid(int mid,int a[])
{
	int cont[mid];
	for(int i=0;i<2*mid;i++)
	{
		if(a[i]
			)
	}
}
int bin_search(int l ,int r,int a[])
{
	int ans=0;
	while(l<r)
	{
		int mid=(l+r)/2;
		if(valid(mid,a))
		{
			ans=mid;
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	return ans;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int l=bin_search(0,n-1,a);

	}
}