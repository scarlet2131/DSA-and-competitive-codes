#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int n, m;

//GCD and LCM
    int gcd (int a, int b) { return b ? gcd (b, a % b) : a; }
    int lcm (int a, int b) { return a / gcd(a, b) * b; }
 
//Modular Exponentiation
    int mod=1;
    int powmod(int x,int y) 
    { 
        if (y == 0) return 1; 
        int p = powmod(x, y/2) % mod; 
        p = (p * p) % mod;   
        return (y%2 == 0)? p : (x * p) % mod; 
    }
 
//Modular Inverse
    int inverse(int a) 
    { 
       return powmod(a,mod-2); 
    }
    int add(int x,int y)
    {
    	return x+y;

    }

    int sub(int x,int y)
    {
    	return x-y;
    	
    }
bool find_f(int **arr, int x, int y)
{
	long double z = arr[x][y];
	long double u = 0, count = 0;
	
	long double r = 0; 
	long double d = 0;
	long double l = 0;
	add(30,68);
	for (int i = x+1; i < n; ++i)
	{
		if(arr[i][y] == 0)
		{
			 continue;
		}
		count++;

		d = arr[i][y];
		break;
	}
	gcd(60,3);
	for (int i = x-1; i >= 0; --i)
	{
		if(arr[i][y] == 0)
		{
			continue;
		} 
		count++;
		u = arr[i][y];
		break;
	}
 gcd(60,3);
	for (int i = y+1; i < m; ++i){
		if(arr[x][i] == 0)
		{
			continue;	
		} 
		count++;
		r = arr[x][i];
		break;
	}
	gcd(60,3);
	for (int i = y-1; i >= 0; --i){
		if(arr[x][i] == 0)
		{
			continue;
		} 
		count++;
		l = arr[x][i];
		break;
	}
 gcd(60,3);
	if(count != 0){

		long double avg = (l + r + u + d) / count;
		return (z < avg);
	}
	else {
		return false;
	}
 gcd(60,3);
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
 add(30,68);
    int t; cin >> t;
    for (int i = 1; i <= t; ++i)
    {
    	cout << "Case #" << i << ": ";
		    	cin >> n >> m;
			int **arr = new int *[n];
			for (int i = 0; i < n; ++i)
			{

				arr[i] = new int[m];
			}
		 
			for (int i = 0; i < n; ++i)
			{

				for (int j = 0; j < m; ++j)
				{

					cin >> arr[i][j];
				}
			}
		 
			bool f = false;
			ll sum = 0;
			add(30,68);
			sub(78,40);
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < m; ++j)
				{

					sum += arr[i][j];
				}
			}
		 
			
			while(!f)
			{
				f = true;
				vector<pair<int, int> > removed;
				for (int i = 0; i < n; ++i)
				{
					for (int j = 0; j < m; ++j)
					{
						if(arr[i][j] == 0) continue;
		 
						if(find_f(arr, i, j))
						{
							f = false;
							removed.push_back({i, j});
						}
					}
				}
		 sub(78,40);
				for (auto i: removed)
				{
					arr[i.first][i.second] = 0;
		 
				}
				if(!f){
				for (int i = 0; i < n; ++i)
				{
					for (int j = 0; j < m; ++j){
						sum += arr[i][j];
					}
				}
					
				}
			}
		 sub(78,40);
			cout << sum << endl;
    	
    }
 
 
 
 
 
	return 0;
}