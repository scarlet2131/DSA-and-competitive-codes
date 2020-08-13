#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
		int M = 0;
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			M +=a[i];
		}
		
		int s=0;
		int c=0;
		for(int i=0;i<n;i++)
		{
			int k=a[i];
			vector<int> PRES(M+1,0);
			
			s=0;
			for(int j=0;j<n;j++)
			{
				s+=a[j];
				// cout<<s<<" "<<s-k<<endl;
				
				if(s==k and j+1>=2)
				{
					c++;
					break;
				}
				if(s-k>=0 and PRES[s-k]!=0 and (j-PRES[s-k])>=2)
				{
					c++;
					break;
				}
				
				PRES[s] = j;
			}
		}
		cout<<c<<"\n";


	}
}