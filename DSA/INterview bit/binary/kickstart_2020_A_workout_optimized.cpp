#include<bits/stdc++.h>
using namespace std;
int valid(int m,int a[],int n)
{
	int c=0;
	for(int i=1;i<n;i++)
	{
		int k=a[i]-a[i-1];
		c+=(k-1)/m;
	}
	// cout<<"m c "<<m<<" "<<c<<endl;
	return c;
}
int bin_search(int l,int r,int a[],int k,int n)
{
	int ans=-1;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(valid(mid,a,n)<=k)
		{
			ans=mid;
			r=mid-1;
			
		}
		else
		{
			l=mid+1;
		}
	}
	return ans;
}
int main()
{
	int t;
	cin>>t;
	for(int d=0;d<t;d++)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];

		}
		sort(a,a+n);
		int mi=INT_MAX;
		int ma=INT_MIN;
		for(int i=1;i<n;i++)
		{
			if(a[i]-a[i-1]<mi)
			{
				mi=a[i]-a[i-1];
			}
			if(a[i]-a[i-1]>ma)
			{
				ma=a[i]-a[i-1];
			}
		}
		// cout<<" mi ma "<<mi<<" "<<ma<<endl;
		int ans=bin_search(1,ma,a,k,n);
		cout<<"Case #"<<d+1<<": "<<ans<<endl;
		

	}
}