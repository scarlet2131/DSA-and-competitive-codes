#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int d=0;d<t;d++)
	{
		int n,k;
		cin>>n>>k;
		set<pair<int,int>> v;
		int e;
		for(int i=0;i<n;i++)
		{
			cin>>e;
			v.insert({e,i});
		}
		// for(auto it=v.begin();it!=v.end();it++)
		// {
		// 	cout<<it->first<<" "<<it->second<<endl;
		// }
		priority_queue<pair<int,int> > m;
		for(auto it=v.begin();it!=v.end();it++)
		{
			auto z =it;
			z++;
			if(z!=v.end())
			{
				// cout<<"here"<<endl;
				m.push({abs(it->first-z->first),it->first});	
			}
				
		}
		// cout<<"2"<<endl;
		// while(!m.empty())
		// {
		// 	 pair<int,int> x=m.top();
		// 	 cout<<x.first<<" "<<x.second<<endl;
		// 	 m.pop();
		// }
		while(k>0)
		{
			pair<int,int> x=m.top();
			int element_to_insert=x.first/2+x.second;
			// cout<<x.second<<" "<<x.first<<endl;

			m.pop();
			m.push({x.first/2,x.second});
			m.push({x.second+x.first-element_to_insert,x.second+x.first/2});
			k--;
		}
		// while(!m.empty())
		// {
		// 	 pair<int,int> x=m.top();
		// 	 cout<<x.first<<" "<<x.second<<endl;
		// 	 m.pop();
		// }
		pair<int,int> x=m.top();
		cout<<"Case #"<<d+1<<": "<<x.first<<endl;


	}
}