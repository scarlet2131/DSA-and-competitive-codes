#include<bits/stdc++.h>
using namespace std;
int n;
int a[100][100];
int dx[8]={-2,-1,1,2,2,1,-1,-2};
int dy[8]={1,2,2,1,-1,-2,-2,-1};

bool safe(int x,int y)
{
	return (x>=0 and y>=0 and x<n and y<n and a[x][y]==0); 
}
void knight(int l,int r,int c)
{
	if(c>=(n*n))
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		cout << endl;
		return;
	}
	for(int i=0;i<8;i++)
	{
		int nl=l+dx[i];
		int nr=r+dy[i];
		if(safe(nl,nr))
		{
			a[nl][nr]=c;
			knight(nl,nr,c+1);
			a[nl][nr]=0;
		}
	}
}
int main()
{
	
	cin>>n;
	int c=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			a[i][j]=0;
		}
	}
	knight(0,0,c);
	return 0;
	
}