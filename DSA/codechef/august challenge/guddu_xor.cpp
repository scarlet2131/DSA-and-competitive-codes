#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		 unsigned int opsize = pow(2, n); 
  
    /* Run from counter 000..1 to 111..1*/
    for (int counter = 1; counter < opsize; counter++) 
    { 
        for (int j = 0; j < n; j++) 
        { 
            /* Check if jth bit in the counter is set 
                If set then print jth element from arr[] */
            if (counter & (1<<j)) 
            {
                cout << a[j] << " "; 
            }

        } 
        cout << endl; 
    } 
	}
}