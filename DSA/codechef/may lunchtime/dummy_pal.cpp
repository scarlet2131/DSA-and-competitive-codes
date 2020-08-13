#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int f=0;
		int c[256]={0};
		int l=s.length();
		int c1=0,c2=0,c3=0;
		if(l<=3)
		{
			f=1;
		}
		else
		{
			for(int i=0;i<l;i++)
			{
				c[s[i]]++;
			}
				for(int i=0;i<256;i++)
				{
					if(c[i]!=0)
					{
						c1++;

					}
				}
			for(int i=0;i<256;i++)
			{
				if(c[i]%2==0)
				{
					c2++;
				}
				else
				{
					c3++;
				}
			}
				if(c2==c1-1)
				{
					f=1;
				}
				if(c1==2 && c3==2)
				{
					f=1;
				}
		}
		if(f==1)
		{
			cout<<"DNA"<<endl;
		}
		else
		{
			cout<<"!DNA"<<endl;
		}
		
		
	}
}