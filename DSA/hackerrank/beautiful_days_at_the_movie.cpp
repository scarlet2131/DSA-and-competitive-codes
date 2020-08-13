#include<bits/stdc++.h>
using namespace std;
int rev(int n)
{
	int num=0;
	while(n>0)
	{
		int rem=n%10;
		num=num*10+rem;
		n=n/10;
	}
	return num;
}
int main()
{
	int l,r,k;
	cin>>l>>r>>k;
	int c=0;
	for(int i=l;i<=r;i++)
	{
		int n=i;
		int re=rev(n);
		// cout<<n<<" "<<re<<endl;
		if(abs(n-re)%k==0)
		{
			c++;
		}
	}
	cout<<c<<endl;
}