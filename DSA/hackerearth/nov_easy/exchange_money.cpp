#include<bits/stdc++.h>
using namespace std;
int bin_search(int a[],int k,int l ,int r)
{

	while(l<=r)
	{
		int mid=(l+r)/2;
		if(a[mid]==k)
		{
			return true;
		}
		else if(a[mid]<k)
		{
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
return false;
}
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int p;
	int f=0;
	int found;
	int s;
	while(k--)
	{
		f=0;
		cin>>p;
		for(int i=0;i<n;i++)
		{
			if(a[i]==p)
			{
				f=1;
			}
			else
			{
				s=a[i]-p;
				if(s>0)
				{
					found =bin_search(a,s,0,n-1);
					if(found==1)
					{
						f=1;
					}
					// cout<<"1st"<<endl;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			if(p%a[i]==0)
			{
				f=1;
				break;
			}
			// cout<<"2nd"<<endl;
		}
		int sum=0,sum1=0;
		for(int i=0;i<n;i++)
		{
			sum+=a[i];
			int z=a[i];
			int c=1;
			while(z<=p)
			{
				z=a[i]*c;
				sum1=sum+z;
				int l=p-sum1;
				if(l>0)
				{
					if(p%l==0)
					{
						f=1;
					}
					// cout<<"l"<<" "<<l<<endl;
					 int d=bin_search(a,l,0,n-1);
					 // cout<<d<<" "<<sum1<<" "<<l<<endl;
				
				
				int l1=p-sum;
				int d1=bin_search(a,l1,0,n-1);
					if(sum==p || d==1 || d1==1 || sum1==p)
					{
						f=1;
						// cout<<"3rd"<<endl;
						break;
					}
				}
				// cout<<"z"<<z<<endl;
				c++;
				// cout<<"c"<<c<<endl;

			}
			// cout<<"4th"<<endl;
			// cout<<f<<endl;
			
		}

		if(f==1)
		{
			cout<<"YES"<<endl;
		}
		else 
		{
			cout<<"NO"<<endl;
		}
	}
}