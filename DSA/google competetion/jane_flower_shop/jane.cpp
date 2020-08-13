#include<bits/stdc++.h>
using namespace std;
double ex(double p,int m,double a[],double r)
{
	double exp=p*pow((1+r),m);
	for(int i=0;i<m;i++)
	{
		exp+=-a[i]*pow((1+r),m-i-1);
	}
	return exp;
}
double bin_search(double p,int m,double a[])
{

	double l=-1.0;
	double r=1.0;
	double val = 0.0;

	// this condition is to break the loop

	while( (r-l)>1e-12 )
	{
		double mid=(l+r)/2;
		
		double ans=ex(p,m,a,mid);
		
		if(ans>=0)
		{
			//if ans will be positive then to decrement the value so 
			r=mid;
		}
		else
		{
			val = mid;
			l=mid;
		}

		
	}
	return val;
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int m;
		cin>>m;
		double p;
		cin>>p;
		double a[m];
		for(int j=0;j<m;j++)
		{
			cin>>a[j];
		}
		
		double ans=bin_search(p,m,a);
		cout<<fixed;
		 cout<<setprecision(12)<<"Case #"<<i+1<<": "<<ans<<endl;
	}
}