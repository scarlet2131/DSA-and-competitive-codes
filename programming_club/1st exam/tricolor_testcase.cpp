#include<bits/stdc++.h>
using namespace std;
int main()
{

	int N=1e5-2;
	int M=1e4+2;
	cout<<N<<" "<<M<<endl;
	int flag[N]={0};
	// srand(0);
long long int c=0;
	for(int i=0;i<M;i++)
	{
		while(1)
		{
			int x=rand()%N;
			if(flag[x]==0)
			{
				cout<<x<<" ";
				c++;
				flag[x]=1;
				break;
			}
		}
	}
cout<<"c  "  <<c<<endl;
	
}
