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
		int ans=1;
		int c=0,c1=0;
		int min=9999,min1=a[0];
		for(int i=1;i<=5;i++)
		{
			if(a[i]<min1)
			{
				min1=a[i];
				c++;
			}
		}
		//cout<<c<<endl;
		for(int i=6;i<n;i++)
		{
			c1=0;
			min=9999;
			for(int j=i-5;j<i;j++)
			{
				if(a[i]<a[j])
				{
					min=a[i];
					c1++;
					// cout<<a[j]<<" "<<c1<<endl;
				}
			}
			
			if(c1==5)
			{
				ans++;
				// cout<<ans<<" a"<<" ";

			}
			// cout<<endl;
		}

		cout<<ans+c<<endl;
	}
}