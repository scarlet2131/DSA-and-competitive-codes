#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,m;
	cin>>n>>k>>m;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int diff[n];
	int c=0;
	for(int i=1;i<n;i++)
	{
		diff[c++]=abs(a[i]-a[i-1]);
	}
	int count[c]={0};
	for(int i=0;i<c;i++)
	{
		count[diff[i]%m]++;
	}
	// for(int i=0;i<m;i++)
	// {
	// 	cout<<count[i]<<" ";
	// }
	int z=0;
	int ans[n]={0};
	int x=0;
	for(int i=0;i<n-1;i++)
	{
		cout<<a[i]<<"ai "<<endl;
			if(count[diff[i]%m]==0)
			{
				ans[x++]=a[i];
				ans[x++]=a[i+1];
			}
		

		
	}
	for(int i=0;i<k;i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}