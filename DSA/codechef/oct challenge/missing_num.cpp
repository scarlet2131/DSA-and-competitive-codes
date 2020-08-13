#include<bits/stdc++.h>
using namespace std;

#define ll long long int 
ll th = 1e12;
ll find_num(ll base ,string x)
{
	ll s=0;
	ll c=0;
	ll rem=0;
	ll f=0;
	ll l=x.length();
	while(l>0)
	{
		if(x[l-1]>=65)
		{
			if(base>int(x[l-1]-55))
			{
				s+=pow(base,c)*int(x[l-1]-55);
				if( s>th )
					return -1;
			}
			else
			{
				return -1;
			}
		}
		else
		{
			if(base>int(x[l-1]-55))
			{
				s+=pow(base,c)*int(x[l-1]-48);
				if( s>th )
					return -1;
			}
			else
			{
				return -1;
			}
		}
		
		l--;
		c++;
		// cout<<"s"<<" "<<s<<endl;
	}
		return s;
}
ll find_base(ll final, string ans)
{
	string x=ans;
	ll f=0;
	ll z=0;
	
	for(ll j=2;j<=36;j++)
	{
		f=0;
		z=find_num(j,ans);
		if(z==final)
		{
			return j;
		}
		
	}
	
	
	return -1;
		
	

}
int  main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll x;
		string y;
		ll a[n];
		string b[n];
		ll c1=0;
		ll c2=0;
		ll z;
		for(ll i=0;i<n;i++)
		{
			cin>>x;
			cin>>y;
			a[c1++]=x;
			b[c2++]=y;
		}
		ll base;
		for(ll i=0;i<n;i++)
		{
			if(a[i]!=-1)
			{
				base=a[i];
				x=find_num(base,b[i]);
				break;
			}

		}
		if(x==-1)
		{
			cout<<-1<<endl;
		}
		else
		{
			
			ll f=0;
				for(ll i=0;i<n;i++)
				{
					if(a[i]==-1)
					{
						z=find_base(x,b[i]);
						if(z!=-1)
						{
							a[i]=z;
						}
					}
				}
				for(ll i=0;i<n;i++)
				{
					if(a[i]==-1)
					{
						f=1;
					}
				}
				if(f!=1)
				{
					cout<<x<<endl;
				}
				else
				{
					cout<<"-1"<<endl;
				}
			
			//cout<<x<<endl;
		}
		

	}
}