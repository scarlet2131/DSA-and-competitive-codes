#define ll long long int
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int b[n];
		int c[2*n];
		int x=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
			
		}
		sort(a,a+n);
		sort(b,b+n);
		ll sum=0;
		for(int i=0;i<n;i++)
		{
			
			sum+=min(a[i],b[i]);
		}
		cout<<sum<<endl;

	}
}