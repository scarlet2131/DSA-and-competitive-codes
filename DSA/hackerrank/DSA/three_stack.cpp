#include<bits/stdc++.h>
using namespace std;

int main()
{
	stack<int> s1;
	stack<int> s2;
	stack<int> s3;
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	int a[n1];
	int b[n2];
	int c[n3];
	int x1=0,x2=0,x3=0;
	int x;
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
		x1+=a[i];
		
	}
	for(int i=0;i<n2;i++)
	{
		cin>>b[i];
		x2+=b[i];
		
	}
	for(int i=0;i<n3;i++)
	{
		cin>>c[i];
		x3+=c[i];
		
	}
	for(int i=n1-1;i>=0;i--)
	{
		s1.push(a[i]);
	}
	for(int i=n2-1;i>=0;i--)
	{
		s2.push(b[i]);
	}
	for(int i=n3-1;i>=0;i--)
	{
		s3.push(c[i]);
	}

	
	while(1)
	{
		if(x1==x2 && x2==x3)
		{
			break;
		}
		else
		{
			if(x1>x2 && x1>x3)
			{
				
				x1=x1-s1.top();
				s1.pop();

			}
			if(x2>x1 && x2>x3)
			{
				x2=x2-s2.top();
				s2.pop();
			}
			if(x3>x1 && x3>x2)
			{
				x3=x3-s3.top();
				s3.pop();
			}
		}
		

		
		// cout<<"x1"<<" "<<x1<<" "<<"x2"<<" "<<x2<<" "<<"x3"<<" "<<x3<<endl;

		
	}
cout<<x1<<endl;
}