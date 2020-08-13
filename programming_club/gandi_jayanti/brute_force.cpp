#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool isPower(ll n)
{
	ll N=n;
	ll c=0;
	while(N)
	{
		c++;
		N/=2;
	}
	if(pow(2,c-1)==n)
	{
		return true;
	}
	return false;
}
int main()
{
	
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int rem,sum=0;
		int c=0;
		
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				sum=a[i]+a[j];
				if(isPower(sum))
				{
					c++;
				}
			}

		}

		cout<<c<<endl;
	}
	

