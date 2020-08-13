#include<bits/stdc++.h>
using namespace std;
 int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		long double x;
		cin>>n>>x;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		long long int  s=0;
		long long int  c=0;
		for(int i=n-1;i>=0;i--)
		{
			s+=a[i];
			if((double)s/(double(n-i))<x)
			{
				break;
			}
			c++;
		}
		// cout<<(double)s/(double(n-1))<<endl;
		cout<<c<<endl;
	}
}