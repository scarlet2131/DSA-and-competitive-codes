#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=-9999;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	int count[max+1]={0};
	for(int i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	// for(int i=0;i<=max;i++)
	// {
	// 	cout<<count[i]<<" ";
	// }
	// cout<<endl;

	for(int i=0;i<=max;i++)
	{
		if(count[i]==1)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
}