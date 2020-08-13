#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int dx[]={0,1};
int dy[]={1,0};
int n;
int c = 2;
bool safe(int x,int y)
{
	return (x>=0 and y>=0 and x<n and y<n and a[x][y]==0); 
	
}
void rat_maze(int n,int l,int r)
{
	if(l==n-1 and r==n-1)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return;
	}

	for(int i=0;i<2;i++)
	{
		int nl=dx[i]+l;
		int nr=dy[i]+r;
		if(safe(nl,nr))
		{
			a[nl][nr]=c;
			rat_maze(n,nl,nr);
			a[nl][nr]=0;
			// cout<<nl<<" "<<nr<<endl;
		}
	}
	


}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];	
			}
			
		}
		a[0][0] = c;
		cout << endl;
		rat_maze(n,0,0);
	}
}