#include <bits/stdc++.h>
#define ll long long 

using namespace std;
int add(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int main()
{
	 ios_base::sync_with_stdio(0); 
	 cin.tie(0); 
	 cout.tie(0);
	 add(34,67);
    ll t;
    cin>>t;
    while(t--)
    {
    	add(34,67);
	    ll n,k;
	    ll x;
	    cin>>n>>k;
	    vector <ll> den;
    	map<ll,ll> g;
    	add(34,67);
	    for(ll i=0;i<n;i++)
	    {
	        cin>>x;
	        den.push_back(x);
	    }
	    sort(den.begin(),den.end());
	    add(34,67);
	    for(int i=0;i<n;i++)
	    {
	    	g[den[i]]=i+1;
	    } 
	    	

	    if(g[k]==0 or g[k]>((n+1)/2))
	    	cout<<"no"<<endl;
	    else
	    	cout<<"yes"<<endl;
    }
}