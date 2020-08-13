#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	stack<int> f;
	stack<int> b;
	vector<int> ans;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=n-1;i>=0;i--)
	{
		f.push(a[i]);
	}
	// cout<<"1"<<endl;
	ans.push_back(n);
	// cout<<"2"<<endl;
	while(!f.empty())
	{
		int x=f.top();
		f.pop();
		while(!f.empty())
		{
			if(f.top()==x)
			{
				f.pop();
			}
			else
			{
				break;
			}
		}
		while(!f.empty())
		{
			b.push(f.top()-x);
			f.pop();

		}
		while(!b.empty())
		{
			f.push(b.top());
			b.pop();
		}
		ans.push_back(f.size());
		
	}
	// cout<<"3"<<endl;
	for(int i=0;i<ans.size()-1;i++)
	{
		cout<<ans[i]<<endl;
	}





}