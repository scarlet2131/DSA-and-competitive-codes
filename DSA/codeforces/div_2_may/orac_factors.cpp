#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool isprime(int n)
{
	if(n==1)
		return false;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int find_min(int n)
{
	if(n==1)
		return 1;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return i;
	}
}
int main()
{
	ll t;
	cin>>t;
	int M=1000001;
	vector<int> small(M,-1);
	small[1]=1;
	for(int i=2;i<M;i++)
	{
		int l=1;
		while(i*l<M)
		{

			if(small[i*l]==-1)
				small[i*l]=i;
			l+=1;
		}
	}
	// for(int i=1;i<=30;i++)
	// {
	// 	cout<<small[i]<<" ";
	// }
	// cout<<endl;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
			if(n%2==0)
			{
				n+=(k)*2;
			}
			else
			{
				
					int x=small[n];
					
					n+=x+(k-1)*2;
					// cout<<"2"<<endl;
				
			}
		
			// cout<<n<<k<<endl;
		
		cout<<n<<endl;
	}
	
}