#include<bits/stdc++.h>
using namespace std;
int fac(int n)
{
    
    if(n>=1)
        return n*fac(n-1);
    else
        return 1;
}
int main()
{
    cout<<fac(6)<<endl;
}