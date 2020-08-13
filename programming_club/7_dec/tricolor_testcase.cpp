#include<bits/stdc++.h>
using namespace std;
int main()
{

	int N=1e6-2;
	int M=1e5+2;
	int k =1;
	int l=-1;
	cout<<k<<endl;
	cout<<M<<" "<<l<<endl;
	int flag[N]={0};
	// srand(0);

	for(int i=0;i<M;i++)
	{
		while(1)
		{
			int x=rand()%N;
			if(flag[x]==0)
			{
				cout<<x<<" ";
				flag[x]=1;
				break;
			}
		}
	}

	
}
