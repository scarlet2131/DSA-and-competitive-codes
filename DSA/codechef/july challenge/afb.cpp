#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#define ll long long int

using namespace std;
int main() {
    ll l1,r1;
    cin>>l1;
    cin>>r1;
    ll l2,r2;
    cin>>l2,r2;
    ll k1,k2;
    for(int i=r1;i>=0;i++)
    {
        if(i%2==0)
        {
            k1=i;
            break;
        }
    }
    for(int i=r2;i>=0;i++)
    {
        if(i%2==0)
        {
            k2=i;
            break;
        }
    }
    // ll ans1=k1/l1;
    // ll ans2=k2/l2;
    if(k1)
    if(ans1*k1>ans2*k2)
    {
        cout<<"A"<<endl;
    }
    else if(ans1*k1<ans2*k2)
    {
        cout<<"B"<<endl;
    }
    else
    {
        cout<<"Draw"<<endl;
    }
   
   
   
    


    
}

