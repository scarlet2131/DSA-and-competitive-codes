#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[k],b[k]={0};
		for(int i=0;i<k;i++)
		{
			int x=n/k;
			a[i]=x;
		}
		int c=n;
		while(c>0)
		{
			for(int i=0;i<k;i++)
			{
				if(c>0)
				{
					b[i]+=k;
					c=c-k;
				}
				else
				{
					b[i]+=0;
				}
				

			}
		}
		// for(int i=0;i<k;i++)
		// {
		// 	cout<<"A"<<" "<<a[i]<<" ";
		// }
		// cout<<endl;
		// for(int i=0;i<k;i++)
		// {
		// 	cout<<"B"<<" "<<b[i]<<" ";
		// }
		// cout<<endl;
		int f=0;
		for(int i=0;i<k;i++)
		{
		 		if(a[i]!=b[i])
		 		{
		 			f=1;
		 			break;
		 		}
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