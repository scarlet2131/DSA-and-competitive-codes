#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int q;
		cin>>q;
		vector<pair<int,pair<int,int>>> g;
		int x,y;
		for(int j=0;j<q;j++)
		{
			cin>>x>>y;
			pair<int,int> z={2,j};
			g.push_back({x,z});
			pair<int,int> d={1,j};
			g.push_back({y,d});

		}
		sort(g.begin(),g.end());
		
		string ans="";
		for(int j=0;j<q;j++)
		{
			ans+='C';
		}
		stack<int> c;
		stack<int> k;
		int f=0;
		for(int j=0;j<g.size();j++)
		{
			if(c.empty() and g[j].second.first==2)
			{
				c.push(g[j].second.second);
				ans[g[j].second.second]='C';
			}
			else if(k.empty() and g[j].second.first==2)
			{
				k.push(g[j].second.second);
				ans[g[j].second.second]='J';
			}
			else if(g[j].second.first==1)
			{

				if(!c.empty() and c.top()==g[j].second.second)
				{
					c.pop();
				}
				else if(!k.empty() and k.top()==g[j].second.second)
				{
					k.pop();
				}

			}
			else if(!c.empty() and !k.empty()  and g[j].second.first==2)
			{
				f=1;
				break;
			}


		}
		if(f==1)
		{
			cout<<"Case #"<<i+1<<": "<<"IMPOSSIBLE"<<endl;

		}
		else
		{
			cout<<"Case #"<<i+1<<": "<<ans<<endl;
		}
		
		
	}
}