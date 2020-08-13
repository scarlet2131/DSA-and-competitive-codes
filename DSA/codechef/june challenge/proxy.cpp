#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string p="";
		string s;
		cin>>s;
		p=s;
		int c=0;
		int f=0;
		int x=0;
		float k,k1;
		for(int j=0;j<n;j++)
			{
				if(p[j]=='P')
				{
					c++;
				}
			}
			k=(float)c/(float)n;
			if(k<0.75)
			{
				cout<<k<<endl;
				x=0;
					for(int i=2;i<n-2;i++)
					{
						//c=c+x;
						
						k=(float)(c+x)/(float)n;
						if(k<0.75)
						{
							if(s[i]=='A' )
								{
									if((s[i-1]=='P' || s[i-2]=='P') )
									{
										if(s[i+1]=='P' || s[i+2]=='P')
										{
											p[i]='P';
											x++;
										}
										
									}

								}	
						}
						else
						{
							break;
						}
						

						
					}
			}
		
		//cout<<s<<endl;
		//cout<<s<<endl;
		k=(float)(c+x)/(float)n;
		if(k<0.75)
		{
			
			cout<<"-1"<<endl;
		}
		else
		{
			cout<<x<<endl;
			
		}
		
			
		
		

		
	}

}