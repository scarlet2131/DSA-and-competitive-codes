#include<bits/stdc++.h>
using namespace std;
int factor(int count[],int x)
{
	int temp=1;
	while(temp*temp<=x)
	{
		if(x%temp==0)
		{
			count[temp]++;

				if(x/temp!=temp)
				{
					count[x/temp]++;
				}
				
			

		}
		
			temp++;

		

	}
	// cout<<"count arr"<<endl;
	// for(int i=0;i<29;i++)
	// {
	// 	if(count[i]!=0)
	// 	{
	// 		cout<<i<<" "<<count[i]<<endl;
	// 	}
	// }
	// cout<<endl;
	return count[x];
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
		int max=-9999;
		for(int i=0;i<n;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
			}
		}
		int count[max+1]={0};
		
		int max1=-9999;
		int temp=1;
		for(int i=0;i<n;i++)
		{
			int fac=factor(count,a[i]);
			// cout<<a[i]<<" "<<fac<<endl;
			if(fac>max1)
			{
				max1=fac;
			}

			
		}
		
		cout<<max1-1<<endl;
		
}
}