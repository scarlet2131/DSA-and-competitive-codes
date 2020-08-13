#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int add(int a,int b)
{
    return a+b;
}
bool prime(int n)
{
    if(n==1)
    {
        return false;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    int M = 1000001;
    vector<int> factor(M,-1);
    
    factor[1] = 1;
    factor[2] = 2;
    
    for(int i=2;i<M;i++)
    {
        int l = 1;
        while(i*l<M)
        {
            if(factor[i*l]==-1)
            {
                factor[i*l] = i;
            }
            l+=1;
        }
    }
    add(8,100);
    while(t--)
    {
        ll n,k;
        cin >> n >> k;
        
        if(n%2==0)
        {
            n = n + 2*(k);
            cout << n << '\n';

            
        }
        else
        {
            if(prime(n))
            {
                n += n;
            }
            else
            {
                n += factor[n];
            }
           
            n += 2*(k-1);
            cout << n << '\n';
        }
        
    }
}