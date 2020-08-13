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
		int b[n];
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		map<int,int> g;
		int f=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]!=b[i])
			{
				if(b[i]>0)
				{
					if(g.find(1)==g.end())
					{
						f=1;
						break;
					}

				}
				else if(b[i]<0)
				{
					if(g.find(-1)==g.end())
					{
						f=1;
						break;
					}
					
				}
				else
				{
					if(a[i]==1)
					{
						if(g.find(-1)==g.end())
						{
							f=1;
							break;
						}
					}
					else if(a[i]==-1)
					{

						if(g.find(1)==g.end())
						{
							f=1;
							break;
						}
					}
					
				}

			}
			g[a[i]]=1;
			
		}
		if(f==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
}