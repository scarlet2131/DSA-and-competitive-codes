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
		int l=n;
		int c=0;
		while(l>0)
		{
			int rem=l%10;
			if(rem!=0 and n%rem==0)
			{
				c++;
			}
			l=l/10;

		}
		cout<<c<<endl;
	}
	
}