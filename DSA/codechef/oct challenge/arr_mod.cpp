#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int c=0;
		for(int i=0;i<k;i++)
		{
			a[i%n]=a[i%n]^a[n-(i%n)-1];
			c++;
			if(c==k)
			{
				break;
			}
			cout<<a[i%n]<<" ";
		}
		cout<<endl;
	}
}