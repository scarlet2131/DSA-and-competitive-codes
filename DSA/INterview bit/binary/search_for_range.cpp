#include<bits/stdc++.h>
using namespace std;
int first(vector<int> v,int b)
{
   int l=0;
   int r=v.size()-1;
   int ans;
   
   while(l<=r)
   {
   	int mid=(l+r)/2;
   	if(v[mid]>=b)
   	{
         ans=mid;
   		r=mid-1;
   	}
   	else
   	{
   		l=mid+1;
   		
   	}
   if(v[mid]==ans)
      return ans;
   return -1;
   }
   
}
int last(vector<int> v,int b)
{
   int l=0;
   int r=v.size()-1;
   int ans=-1;

   while(l<=r)
   {
      int mid=(l+r)/2;
      if(v[mid]<=b)
      {
         ans=mid;
         l=mid+1;
      }
      else
      {
         r=mid-1;
         
      }
   if(v[mid]==ans)
      return ans;
   return -1;
   }
  
}
int main()
{
	int x;
	int n;
   cin>>n;
	vector<int> v;
	vector<int> s;
	int b;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
   cin>>b;
	s.push_back(first(v,b));
   s.push_back(last(v,b));
	cout<<s[0]<<" "<<s[1];
}