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
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int c=0;
		int k=0;
		int l;
		int min=9999;
		while(c<n)
		{
			min=9999;
			for(int i=k;i<n;i++)
			{
				if(a[i]<min)
				{
					min=a[i];
					l=i;
				}
			}
			
			a[l]=a[k];
			a[k]=min;
			k++;
			// cout<<min<<" "<<k<<endl;
			c++;

		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;

return 100;
	}
}