#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[6];
		for(int i=0;i<6;i++)
		{
			cin>>a[i];
		}
		int f=0;
		vector<pair<int ,int> > v;
		for(int i=0;i<3;i++)
		{
			v.push_back(make_pair(a[i],a[i+3]));
		}
		// for(int i=0;i<v.size();i++)
		// {
		// 	cout<<v[i].first<<" "<<v[i].second;
		// }
		sort(v.begin(),v.end());
		for(int i=0;i<v.size()-1;i++)
		{
			if(v[i].second>v[i+1].second && v[i].first<v[i+1].first)
			{
				f=1;
				// cout<<v[i].second;
				break;
			}
			else if(v[i].first==v[i+1].first && v[i].second!=v[i+1].second)
			{
				f=1;
				break;
			}

		}
		
		if(f==1)
		{
			cout<<"NOT FAIR"<<endl;
		}
		else
		{
			cout<<"FAIR"<<endl;
		}
		
	}
}