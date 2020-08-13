#include <bits/stdc++.h> 
using namespace std; 


#define UNASSIGNED 0 
int n;
int a[51][51];
bool UsedInRow(int row, int num) 
{ 
	for (int col = 0; col < n; col++) 
		if (a[row][col] == num) 
			return true; 
	return false; 
} 


bool UsedInCol(int col, int num) 
{ 
	for (int row = 0; row < n; row++) 
		if (a[row][col] == num) 
			return true; 
	return false; 
} 



bool isSafe(int row, 
				int col, int num) 
{ 
	return !UsedInRow(row, num) && 
		!UsedInCol(col, num) && 
			a[row][col] == UNASSIGNED; 
} 
bool FindUnassignedLocation(int &row, int &col) 
{ 
	for (row = 0; row < n; row++) 
		for (col = 0; col < n; col++) 
			if (a[row][col] == UNASSIGNED) 
				return true; 
	return false; 
} 
bool SolveSudoku(int k) 
{ 
	int row, col; 

	
	if (!FindUnassignedLocation(row, col)) 
	{
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=a[i][i];
		}
		if(sum==k)
		{
			return true;
		}
		
	}
		
	

	
	for (int num = 1; num <= n; num++) 
	{ 
		
		if (isSafe(row, col, num)) 
		{ 
			 
			a[row][col] = num; 

			
			if (SolveSudoku(k)) 
				return true; 

			a[row][col] = UNASSIGNED; 
		} 
	} 
	return false; // 
} 






int main() 
{ 
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int k;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				a[i][j]=0;
			}
		}
		bool ans=SolveSudoku(k);
		if(ans)
		{
			cout<<"Case #"<<i+1<<": "<<"POSSIBLE"<<endl;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					cout<<a[i][j]<<" ";
				}
				cout<<endl;
			}
		}
		else
		{
			cout<<"Case #"<<i+1<<": "<<"IMPOSSIBLE"<<endl;
		}
	}	
} 

