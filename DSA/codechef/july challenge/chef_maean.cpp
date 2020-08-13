#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		ll sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			sum=sum+a[i];
		}
		int f=0;
		ll me=sum/n;
		ll min=999999;
		ll s1,l=0;
		
		for(int i=0;i<n;i++)
		{
			s1=0;
			l=0;
			s1=sum-a[i];
			l=s1/(n-1);
			cout<<"s2"<<" "<<l<<endl;
			if(min>a[i] && l==me)
			{
				f=1;
				min=a[i];
			}
			
		}
		if(f==1)
		{
			
			cout<<min<<endl;	
		}
		else
		{
			cout<<"Impossible"<<endl;
		}
		
	}
}