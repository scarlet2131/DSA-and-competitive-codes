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
		int max_n=-9999;
		for(int i =0;i<n;i++)
		{
			if(a[i]>max_n)
			{
				max_n=a[i];
			}
		}
		int c=1;
		int f=0;
		int s[max_n];

		while(c<=max_n)
		{
			for(int i=0;i<n;i++)
			{
				int k=0;
				int b[c];
				f=0;
				for(int j=i;j<i+c;j++)
				{
					b[k++] = a[j];
				}
				sort(b,b+k);
				int sum=0;
				for(int z=0;z<k-1;z++)
				{
					sum+=b[z];
					if(b[z-1]==c && sum==(c*(c+1))/2)
					{
						f=1;
						
					}

				}
				if(f==1)
				{
					break;
				}
				
				cout<<"c "<<c<<f<<endl;
				
			}
			s[c-1]=1-f;
				c++;
		}
		for(int i=0;i<max_n;i++)
		{
			cout<<s[i];
		}
		cout<<endl;

	}
}