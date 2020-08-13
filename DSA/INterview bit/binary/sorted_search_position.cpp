#include<bits/stdc++.h>
using namespace std;
int bin_seacrh(vector<int> v,int b)
{
	int l=0;
	int r=v.size()-1;
	int ans;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(v[mid]<=b)
		{
			ans=mid;
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}

	}
	if(v[ans]==b)
	{
		return ans;
	}
	return ans+1;

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v;
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}
		int b;
		cin>>b;
		if(v[0]>b)
		{
			cout<<"0"<<endl;
		}
		else
		{
			int ans=bin_seacrh(v,b);
			cout<<ans<<endl;
		}
		
	}
}