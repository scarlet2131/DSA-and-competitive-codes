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
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int ans=0;
		int c=0;
		int z=0;
		int m=*max_element(a,a+n);
		int count[m+1]={0};
		for(int i=0;i<n;i++)
		{
			count[a[i]]++;
		}
		// for(int i=0;i<m+1;i++)
		// {
		// 	cout<<count[i]<<" ";
		// }
		// cout<<endl;
		int mi=0;
		int x=-1;
		for(int i=0;i<m+1;i++)
		{
			if(count[i]>1)
			{
				if(count[i]>mi)
				{
					mi=count[i];
					x=i;
				}
				
			}
		}
		int uniq=0;
		// cout<<x<<endl;
		for(int i=0;i<m+1;i++)
		{
			if(i!=x and count[i]>0)
			{
				uniq++;
			}
		}
		// cout<<mi<<endl;
		 // cout<<uniq<<endl;
		if(mi==uniq or mi-uniq==1)
		{
			ans=uniq;
		}
		else if(mi-uniq>1)
		{
			ans=uniq+1;
		}
		else if(mi==0 and uniq>1)
		{
			ans=1;
		}
		else if(mi<uniq)
		{
			ans=mi;
		}




		cout<<ans<<endl;

	}
}