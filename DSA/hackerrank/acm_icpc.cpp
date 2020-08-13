#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<string> a;
	string x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a.push_back(x);
	}
	int count[500]={0};
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int c=0;
			for(int k=0;k<m;k++)
			{
				
				if(a[i][k]=='1' and a[j][k]=='1')
				{
					c++;

				}
				else if(a[i][k]=='1' and a[j][k]=='0')
				{
					c++;
				}
				else if(a[i][k]=='0' and a[j][k]=='1')
				{
					c++;
				}
				

			}
			count[c]++;
		}
	}
	// for(int i=0;i<10;i++)
	// {
	// 	cout<<count[i];
	// }
	// cout<<endl;
	int ans;
	for(int i=0;i<500;i++)
	{
		if(count[i]>=1)
		{
			ans=i;
		}
	}
	cout<<ans<<endl;
	cout<<count[ans]<<endl;

}