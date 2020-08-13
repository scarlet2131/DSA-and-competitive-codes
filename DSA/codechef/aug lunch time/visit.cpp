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
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		
		int c=0;
		int kl=0;
		int f=0;


		for(int i=0;i<n;i++)
		{
			if(arr[i] == -1)
			{
				if(i==0)
				{
					int c1 = arr[i+1];
					for(int j=1;j<=k;j++)
					{
						if( j!=c1 )
						{
							arr[i] = j;
							break;
						}
					}

				}
				if(i==n-1)
				{
					int c1 = arr[i-1];
					for(int j=1;j<=k;j++)
					{
						if( j!=c1 )
						{
							arr[i] = j;
							break;
						}
					}
				}
				else
				{
					int c1 = arr[i-1];
					int y = arr[i+1];
					for(int j=1;j<=k;j++)
					{
						if( j!=c1 && j!=y)
						{
							arr[i] = j;
							break;
						}
					}
				}
				
			}
		}

				for(int i=0;i<n;i++)
				{

					if(arr[i]==-1)
					{
						f=1;
						
					}
				}
			// 	for(int i=0;i<n;i++)
			// {
			// 	cout<<b[i]<<" ";
			// }
				
		
		
		
		if(f==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}

	}
}