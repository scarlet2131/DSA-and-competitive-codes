#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int count[101]={0};
	for(int i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	int m=*max_element(count,count+101);
	cout<<n-m<<endl;
}