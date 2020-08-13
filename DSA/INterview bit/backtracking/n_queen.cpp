#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int n;
bool safe(int r,int c)
{

// int f=0;

//for left side of the same row
for(int i=0;i<c;i++)
{
	if(a[r][i]==1)
	{
		return false;
	}
}

//for lower upper diagonal 

for(int i=r,j=c;i>=0 and j>=0;i--,j--)
{
	if(a[i][j]==1)
	{
		return false;
	}
}

//for lower left diagonal
for(int i=r,j=c;i<n and j>=0;i++,j--)
{
	if(a[i][j]==1)
	{
		return false;
	}
}


return true;


}
void n_queen(int c)
{
	if(c>=n)
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
		return ;
	}
	for(int i=0;i<n;i++)
	{
		if(safe(i,c))
		{
			a[i][c]=1;
			n_queen(c+1);
			a[i][c]=0;
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
				a[i][j]=0;
			}
		}
		n_queen(0);
	}
}