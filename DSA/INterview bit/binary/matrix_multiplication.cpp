#include<bits/stdc++.h>
using namespace std;
// int bin_search(vector<vector<int> >v)
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int ans;
		int x;
		int m,n;
		cin>>m>>n;
		vector<vector<int> >v(m);
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>x;
				v[i].push_back(x);
			}
		}
		int b;
		cin>>b;
		int f=0;
		int l=0,r=n-1;
		while(l<=m  && r>=0)
		{
			if(v[l][r]==b)
			{
				f=1;
			}
			if(v[l][r]<b)
			{
				
				l++;
				
			}
			else
			{
				
				// ans=v[l][r];
				r--;
			}
			
		}
		
		if(f==1)
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
}