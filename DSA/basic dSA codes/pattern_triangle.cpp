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
		for(int i=0;i<n;i++)
		{
			
			if(i%2==0)
			{
				for(int j=0;j<i;j++)
				{
					cout<<" ";
				}
				for(int j=i;j<=n-i-1;j++)
				{
					cout<<"*";
				}
				for(int j=n-i-1;j<n;j++)
				{
					cout<<" ";
				}

				
			}
			else{
				for(int j=0;j<i;j++)
				{
					cout<<" ";
				}
				for(int j=i;j<n-i;j++)
				{
					cout<<"*";
				}
				for(int j=n-i-1;j<n;j++)
				{
					cout<<" ";
				}
				
				}
				
				cout<<endl;
			
		}
	}
}