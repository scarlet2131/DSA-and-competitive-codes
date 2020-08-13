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
		int k1=0,k2=0;
		int min=9999;
		int rev[n];
		int c=0,xor_n=0,xor_o=0,c2=0;
		int triples=0;
		xor_o=a[0];
		for(int i=0;i<n-1;i++)
		{
			
			c=xor_o;
			if(c<min)
			{
				min=c;
				cout<<"min"<<" "<<min<<endl;
			}
			
			xor_o=a[i+1]^xor_o;
			cout<<"xor"<<" "<<xor_o<<endl;

			if(xor_o<min)
			{
				// if(min-xor_o==a[i])
				// {
					cout<<"f1"<<endl;
					min=xor_o;
					k1=i+1;
					xor_n=a[i+1];
					for(int j=i+1;j>=0;j--)
					{
						c2=a[j];
						xor_n=a[j-1]^xor_n;
						if(xor_n==0)
						{
							k2=j-1;
							cout<<"f3"<<endl;
							break;
						}
					}
				//}
			}
			cout<<"k1"<<" "<<k1<<" "<<"k2"<<" "<<k2<<endl;
			
				triples+=abs(k1-k2);
				k1=0;
				k2=0;
			

		}
		cout<<triples<<endl;


	}
}