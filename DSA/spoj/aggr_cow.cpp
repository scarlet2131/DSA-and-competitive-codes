#include<bits/stdc++.h>
using namespace std;
bool valid(int arr[],int n,int c,int m)
{
	for(int i=0;i<n;i++)
	{
		
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c;
		cin>>n>>c;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int max=-9999;
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=a[i];
			if(a[i]>max)
			{
				max=a[i];
			}
		}
		int l=max;
		int h=sum;
		int ans=0;
		int m;
		while(l<=h)
		{
			m=(l+h)/2;
			if(valid(a,n,c,m))
			{
				ans=m;
				h=m-1;
			}
			else
			{
				l=m+1;
			}
		}
	}
}