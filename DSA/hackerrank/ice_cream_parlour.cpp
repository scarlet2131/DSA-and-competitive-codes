#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		map<int,int> g;
		pair<int,int> ans;
		for(int i=0;i<n;i++)
		{
			
			auto it=g.find(a[i]);
			if(it!=g.end())
			{
				ans={it->second+1,i+1};
				break;
			}
			g[m-a[i]]=i;
		}
		cout<<ans.first<<" "<<ans.second<<endl;
	}
}