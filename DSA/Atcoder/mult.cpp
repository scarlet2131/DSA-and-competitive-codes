#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#include <boost/multiprecision/cpp_int.hpp> 
using boost::multiprecision::cpp_int; 


void multiply()
{
	
	cpp_int a;
	 double b;
	cin >> a >> b;
	b = ((b)*(1000.0000000000000000));
	cpp_int bb = (cpp_int)b;
	cpp_int aa = a;
	cpp_int aans = (aa*bb);
	cpp_int t = aans/1000;
	cout << t << endl;
 
}
 
int32_t main()
{
	ios_base::sync_with_stdio(0);
	 cin.tie(0); 
	 cout.tie(0);
    
    	multiply();
    return 0;
}