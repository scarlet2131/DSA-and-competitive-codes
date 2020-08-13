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
		int x,y;
		
		vector<pair<int,int>>v;
		for(int i=0;i<n;i++)
		{
			cin>>x>>y;
			v.push_back({x,y});
			
		}
		int cp=v[0].first;
		int cc=v[0].second;
		int f=0;
		if(cc>cp)
		{
			f=1;
		}
		int p,c;
		for(int i=1;i<n;i++)
		{
			p=v[i].first;
			c=v[i].second;
			if(p>cp)
			{
				int d=p-cp;
				if(c<cc)
				{
					f=1;
					break;
				}
				if(c>cc+d)
				{
					f=1;
					break;
				}
			}
			else if(p<cp or c<cc)
			{
				f=1;
				break;
			}
        
	       else if(p==cp and (c>cc or c<cc))
	       {
	       	f=1;
	       	break;
	       }
        cp = p;
        cc = c;
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