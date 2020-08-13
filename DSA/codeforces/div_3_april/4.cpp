#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m[9][9];
		string s[9];;
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				cin>>s[i][j];
				
			}
		}
		// cout<<1<<endl;
		int i=0;
		// for(int i=0;i<9;i++)
		// {
		// 	for(int j=0;j<9;j++)
		// 	{
		// 		cout<<m[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }

		
			
				s[2][1]=s[2][2];
				s[1][4]=s[1][5];
				s[2][7]=s[2][8];
				s[5][1]=s[5][2];
				s[4][4]=s[4][5];
				s[5][7]=s[5][8];
				s[8][1]=s[8][2];
				s[7][4]=s[7][3];
				s[8][7]=s[8][8];
		
		// cout<<"1"<<endl;
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				cout<<s[i][j];
			}
			cout<<endl;
		}

	}
}