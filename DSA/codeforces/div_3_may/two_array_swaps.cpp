#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    int t;
    
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
             cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
        }     
        sort(b,b+n);
        sort(a,a+n);
        int l=0;
        int r=n-1;
        ll sum = 0;
        ll count = 0;
        while(r>=0)
        {
            if(b[r]>a[l])
            {
                if(count==k)
                    break;
                sum+=b[r];
                count+=1;
                
                r-=1;
                l+=1;
            }
            else 
            {
                r--;
            }
        }
        for(int i=count;i<n;i++)
        {
             sum += a[i];
        }    
        cout << sum<< '\n';
    }
}