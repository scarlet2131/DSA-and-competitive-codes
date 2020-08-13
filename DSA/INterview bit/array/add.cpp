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
		int input;
		vector<int >v;
		for(int i=0;i<n;i++)
		{
			cin>>input;
			v.push_back(input);
		}
		int sum=0;
		//vector<T> iterator it
		for(int i=0;i<v.size();i++)
		{
			sum+=v[i]*pow(10,n-i-1);
			// cout<<sum<<endl;

		}
		// cout<<"f"<<endl;
		sum=sum+1;
		// cout<<sum<<endl;
		int c=0;
		int a[n];
		int x;
		vector<int > v1;
		
			while(sum>0)
			{
				x=sum%10;
				a[c++]=x;
				// cout<<x<<endl;
				sum=sum/10;
				// cout<<sum<<" ";
			}
			// cout<<"f"<<endl;
			// for(int i=0;i<n;i++)
			// {
			// 	cout<<a[i]<<" ";
			// }

			for(int i=c;i>=0;i--)
			{

				v1.push_back(a[i]);
			}
			for(int i=0;i<n;i++)
			{
				cout<<v1[i]<<" ";
			}
			cout<<endl;

	}
}