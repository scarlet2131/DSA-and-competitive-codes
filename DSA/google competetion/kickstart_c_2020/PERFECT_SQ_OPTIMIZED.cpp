#include <bits/stdc++.h> 
using namespace std;
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int n,ar[100000];
int squar(int s)  
{  
    unordered_map<int,int> p;  
    int a=0;  
    int c=0;
    for(int i=0;i<n;i++)
    { 
        c+=ar[i];  
        if(c==s)a++;
        if (p.find(c-s)!=p.end())a+=(p[c-s]); 
		p[c]++; 
    }  
    return a;
}
void win() {
	cin>>n;
	for(int i=0; i<n; ++i)cin>>ar[i];
	long long int c=0l;
	int m=-10000;
	int j=0;
	for(int a:ar)
	{
		j+=a;
		m=max(m,j);
		if(j<0)j=0;
	}
	int s=sqrt(m);
	for(int x=0;x<=s;x++)c+=squar(x*x);
	cout << c << "\n";
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);
	int t, i=1;
	cin >> t;
	while(t--)
	{
		cout<<"Case #"<<i<<":";
		win());
		++i;
	}
}