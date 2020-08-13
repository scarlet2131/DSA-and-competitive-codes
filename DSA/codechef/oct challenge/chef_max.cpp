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
		int max=-99999;
		// for(int i=0;i<n;i++)
		// {
		// 	c=0;
		// 	for(int j=0;j<i;j++)
		// 	{
		// 		if(a[j]%a[i]==0)
		// 		{
		// 			c++;
		// 		}
		// 	}
		// 	if(c>max)
		// 	{
		// 		max=c;
		// 	}
		// 	// cout<<a[i]<<" "<<c<<" "<<max<<endl;
		// }
		// cout<<max<<endl;
		int b[n]={1};
		b[0]=a[0];
		for(int i=1;i<n;i++)
		{
			b[i]=b[i-1]*a[i];
		}
		
		for(int i=0;i<n;i++)
		{
			b[i]=b[i]/a[i];
			c=0;
			while(b[i]>0 && a[i]!=1)
			{
				// cout<<b[i]<<" "<<a[i]<<endl;

				if(b[i]%a[i]==0)
				{
					c++;
					b[i]=b[i]/a[i];
				}
				else
				{
					b[i]=b[i]/a[i];

					break;
				}
				// cout<<c<<" "<<b[i]<<endl;



			}
			cout<<"b"<<" "<<a[i]<<" "<<c<<endl;
				if(c>max)
				{
					max=c;
				}
			}
		
		cout<<max<<endl;
	}
}