#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
    	map<int ,int> pm;
    	for(int i=0;i<n;i++)
    	{
    		pm[a[i]]++;
    	}
    	map<int, int>::iterator itr; 
    	for(itr=pm.begin();itr!=pm.end();itr++)
    	{
    		int k=abs(itr->first,m);
    		if(itr->first==k)
    		{
    			itr->second--;
    		}
    	}

	}
}