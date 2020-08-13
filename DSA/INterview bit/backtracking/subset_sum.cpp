#include<bits/stdc++.h>
using namespace std;
int f=0;
void check(vector<int> v,int n,int level,vector<int> nv,int k)
{
	if(level==n)
	{
		int sum=0;
		for(int i=0;i<nv.size();i++)
		{
			sum+=nv[i];
		}
		if(sum==k)
		{
			f=1;
		}
		return;
	}

	nv.push_back(v[level]);
	check(v,n,level+1,nv,k);

	nv.pop_back();
	check(v,n,level+1,nv,k);
	
}

bool subsum(vector<int> v,int n,int level,int sum,vector<int> temp,int k)
{
	if(level==n)
	{
		if(sum==k)
		{
			for(int i=0;i<temp.size();i++)
			{
				cout<<temp[i]<<" ";
			}
			cout<<endl;
			// return true;
		}
		return false;
	}
	vector<int> t=temp;
	t.push_back(v[level]);
	return subsum(v,n,level+1,sum+v[level],t,k) or subsum(v,n,level+1,sum,temp,k);

	
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
		vector<int> nv;
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}
		int k;
		cin>>k;
		// check(v,n,0,nv,k);
		vector<int> t;
		subsum(v,n,0,0,t,k);
		
	}
}