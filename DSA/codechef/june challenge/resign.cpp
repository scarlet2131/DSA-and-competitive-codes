#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll check_p(int k1,int k2)
{
	ll c=0;
	ll arr[10];
	ll count[10]={0};
	ll k=0;
	while(k1>=0)
	{
		arr[c++]=k1%10;
		k1=k1/10;
		if(k1==0)
			break;

	}
	while(k2>=0)
	{
		arr[c++]=k2%10;
		k2=k2/10;
		if(k2==0)
			break;
	}
	//for(int i=0;i<c;i++)
	//{
		//cout<<arr[i]<<" "<<endl;
	//}
	for(ll i=0;i<c;i++)
	{
		count[arr[i]]++;
	}
	for(ll i=0;i<100000;i++)
	{
		if(count[i]!=0)
		{
			k++;
		}
	}
	return k;

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k;
		ll cx=0;
		ll l=pow(10,k);
		//cout<<l<<endl;
		for(ll i=0;i<l;i++)
		{
			ll k1=i;
			ll k2=l-i-1;
			ll f=check_p(k1,k2);
			//cout<<k1<<" "<<k2<<" "<<f<<endl;
			if(f==2)
			{ 
				cx++;
			}
		}
		cout<<cx<<endl;
	}
}
