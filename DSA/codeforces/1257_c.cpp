#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool valid(int k,int a[],int n)
{
	
	int f=0;
	int m=*max_element(a,a+n);
	int count[m+1]={0};
	for(int i=0;i<k;i++)
	{
		count[a[i]]++;
		if(count[a[i]]>1)
		{
			f=1;
			break;
		}
	}
	if(f!=1)
	{
		for(int i=k;i<n;i++)
		{
			count[a[i-k]]--;
			count[a[i]]++;
			if(count[a[i]]>1)
			{
				f=1;
				break;
			}
		}
	}
	// for(int i=0;i<m;i++)
	// {
	// 	cout<<count[i]<<" ";
	// }
	if(f==1)
	{
		return true;
	}
	return false;
}
int bin_search(int a[],int l,int r,int n)
{
	int ans=-1;
	while(l<=r)
	{
		int mid=(l+r)/2;

		if(valid(mid,a,n))
		{
			// cout<<ans<<" ans "<<endl;
			ans=mid;
			r=mid-1;
		}
		else
		{
			// cout<<l<<" l in else"<<endl;
			l=mid+1;
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
		int ans=bin_search(a,0,n,n);
		cout<<ans<<endl;
	}
}