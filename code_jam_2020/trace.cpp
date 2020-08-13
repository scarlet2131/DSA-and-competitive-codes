#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int a[n][n];
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				cin>>a[j][k];
			}
		}
		int s=0;
		for(int i=0,j=0;i<n and j<n;i++,j++)
		{
			s+=a[i][j];
		}
		int c=0;
		
		for(int j=0;j<n;j++)
		{
			int count[n+1]={0};
			for(int k=0;k<n;k++)
			{
				count[a[j][k]]++;

			}
			for(int k=0;k<n+1;k++)
			{
				// cout<<count[k]<<" ";
				if(count[k]>1)
				{
					c++;
					break;
				}
			}
		}
		int r=0;
		for(int j=0;j<n;j++)
		{
			int count[n+1]={0};
			for(int k=0;k<n;k++)
			{
				count[a[k][j]]++;

			}
			for(int k=0;k<n+1;k++)
			{
				// cout<<count[k]<<" ";
				if(count[k]>1)
				{
					r++;
					break;
				}
			}
		}
		cout<<"Case #"<<i+1<<": "<<s<<" "<<c<<" "<<r<<endl;
	}
}