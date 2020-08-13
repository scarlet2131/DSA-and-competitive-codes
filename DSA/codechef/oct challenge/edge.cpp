#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int x,y;
		int a,b;
		int count[n+1]={0};
		for(int i=0;i<m;i++)
		{
			cin>>x;
			cin>>y;
			 a=x;
			 b=y;
			count[x]++;
			count[y]++;
		}
		int f=0;
		int l;
		for(int i=1;i<=n;i++)
		{
			if(count[i]%2!=0)
			{
				f=1;
				l=i;
				break;
			}
		}
		// for(int i=0;i<n+2;i++)
		// {
		// 	cout<<count[i]<<" ";
		// }
		int ans;
			if(m%2==0)
			{
				ans=1;
			}
			else if(m%2!=0 && f==1)
			{
				ans=2;
			}
			else
			{
				ans=3;
			}
			if(ans==1)
			{
				cout<<ans<<endl;
				for(int i=0;i<n;i++)
				{
					cout<<"1"<<" ";
				}
				cout<<endl;
			}
			if(ans==2)
			{
				cout<<ans<<endl;
				for(int i=1;i<=n;i++)
				{
					if(i==l)
					{
						cout<<"1"<<" ";
					}
					else
					{
						cout<<"2"<<" ";
					}

				}
				cout<<endl;
			}
			if(ans==3)
			{
				cout<<ans<<endl;
				for(int i=1;i<=n;i++)
				{
					if(i==a)
					{
						cout<<"1"<<" ";
					}
					else if(i==b)
					{
						cout<<"2"<<" ";
					}
					else{
						cout<<"3"<<" ";
					}
				}
				cout<<endl;
			}
			
		


	}
}