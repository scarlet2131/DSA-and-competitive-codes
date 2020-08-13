#include<bits/stdc++.h>
using namespace std;
void gen_permute(int a[],int n,int level)
{
	if(level==n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=level;i<n;i++)
	{
		//swap
		int k=a[level];
		a[level]=a[i];
		a[i]=k;

		gen_permute(a,n,level+1);

		// unswap 
		k=a[level];
		a[level]=a[i];
		a[i]=k;

	}

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		gen_permute(a,n,0);

	}

}