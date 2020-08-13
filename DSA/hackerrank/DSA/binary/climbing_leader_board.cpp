
#include<bits/stdc++.h>
using namespace std;

int bin_search(vector<pair<int,int> >& v,int k)
{
	int l=0;
	int r=v.size()-1;
	int ans=-1;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(v[mid].first>=k)
		{
			if(v[mid].first==k)
			{
				ans=v[mid].second;
				break;
			}
			else
			{
				ans=v[mid].second+1;
			}
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int m;
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	vector<pair<int,int> > v;
	sort(a,a+n);
	v.push_back({a[n-1],1});
	int f=1;
	for(int i=n-2;i>=0;i--)
	{
		if(a[i]==a[i+1])
		{

			v.push_back({a[i],f});
		}
		else
		{
			f++;
			v.push_back({a[i],f});
		}
	}
	reverse(v.begin(),v.end());
	// for(int i=0;i<n;i++)
	// {
	// 	cout<<v[i].first<<" "<<v[i].second<<endl;
	// }

	for(int i=0;i<m;i++)
	{
		int ans=bin_search(v,b[i]);
		if(ans==-1)
		{
			ans=1;
		}
		// else if(ans==0)
		// {
		// 	ans=1;
		// }
		cout<<ans<<'\n';
	}
}