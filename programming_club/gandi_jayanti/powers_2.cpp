#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPresent(ll a[],ll low,ll high,ll x)
{
	while( low<=high )
	{
		int mid = (low+high)/2;
		if( a[mid] == x)
			return true;
		else if( a[mid]>x )
			high = mid-1;
		else
			low = mid+1;
	}
	return false;
}

int findF(ll a[],ll low,ll high,ll x)
{
	int ans = -1;
	while(low<=high)
	{
		int mid = (low+high)/2;
		if( a[mid] == x)
		{
			ans = mid;
			high = mid-1;
		}
		else if( a[mid]>x )
			high = mid-1;
		else
			low = mid+1;
	}
	return ans;
}

int findL(ll a[],ll low,ll high,ll x)
{
	int ans = -1;
	while(low<=high)
	{
		int mid = (low+high)/2;
		if( a[mid] == x)
		{
			ans = mid;
			low = mid+1;
		}
		else if( a[mid]>x )
			high = mid-1;
		else
			low = mid+1;
	}
	return ans;
}

int main()
{
	int n;
	cin >> n;
	ll a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	ll c = 0;
	for(int i=0;i<32;i++)
	{
		ll x = pow(2,i);
		for(int j=0;j<n;j++)
		{
			ll s = x-a[j];
			bool p = isPresent(a,j+1,n-1,s);
			if(p)
			{
				int first = findF(a,j+1,n-1,s);
				int last = findL(a,j+1,n-1,s);
				// cout << " " << x-a[j] << " " << a[j] << " - > " << first << " " << last << endl;
				c += abs(last-first+1);
			}
		}
	}
	cout << c << endl;
}