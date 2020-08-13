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
		int min=999;
		int key;
		for(int i=0;i<n-1;i++)
		{
			min=i;
			for(int j=i+1;j<n;j++)
			{
				
				if(a[min]>a[j])
				{
					min=j;
				}
			}
			key = a[min];
			while(min>i)
			{
				a[min]=a[min-1];
				min--;
			}
			a[i]=key;
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
