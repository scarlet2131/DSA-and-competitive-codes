#include<bits/stdc++.h>
using namespace std;
void subset(vector<int> v,int n,int level,vector<int> nv)
{
	if(level==n)
	{
		if(nv.size()>0)
		{
			for(int i=0;i<nv.size();i++)
			{
				cout<<nv[i]<<" ";
			}
			cout<<endl;
			return;
		}
		
	}
	nv.push_back(v[level]);
	subset(v,n,level+1,nv);

	nv.pop_back();
	subset(v,n,level+1,nv);
}
void subset_ar(vector<int> v,int n,int level,int na[],int cn)
{
	
	if(level==n)
	{
		if(cn>0)
		{
			for(int i=0;i<cn;i++)
			{
				
					cout<<na[i]<<" ";
				
				
			}
			cout<<endl;
			
		}
		return;
	}

	

	na[cn]=v[level];
	subset_ar(v,n,level+1,na,cn+1);

	subset_ar(v,n,level+1,na,cn);

	
	
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
		 subset(v,n,0,nv);
		// int na[n];
		// subset_ar(v,n,0,na,0);
	}
}