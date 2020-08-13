#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool isPresent(ll a[],ll l,ll r,ll x)
{
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(a[mid]==x)
		{
			return true;
		}
		else if(a[mid]>x)
		{
			r=mid-1;
		}
		else if(a[mid]<x)
		{
			l=mid+1;
		}
	}
	return false;
	
}
int firstL(ll a[],ll l,ll r,ll x)
{
	int ans=-1;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(a[mid]==x)
		{
			ans=mid;
			r=mid-1;
		}
		else if(a[mid]>x)
		{
			r=mid-1;
		}
		else if(a[mid]<x)
		{
			l=mid+1;
		}

	}
	return ans;
}
int LastL(ll a[],ll l,ll r,ll x)
{
	int ans=-1;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(a[mid]==x)
		{
			ans=mid;
			l=mid+1;
		}
		else if(a[mid]>x)
		{
			r=mid-1;
		}
		else if(a[mid]<x)
		{
			l=mid+1;
		}
	}
	return ans;
	
}
int main()
{
	int n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	ll k;
	ll c=0;
	for(int i=0;i<32;i++)
	{

		for(int j=0;j<n;j++)
		{
			k= pow(2,i)-a[j];
			int p = isPresent(a,j+1,n-1,k);
			// cout<<p<<endl;
			if(p)
			{
				int first=firstL(a,j+1,n-1,k);
				int last=LastL(a,j+1,n-1,k);
				c+=abs(last-first+1);
			}

		}
	}
	cout<<c<<endl;

}