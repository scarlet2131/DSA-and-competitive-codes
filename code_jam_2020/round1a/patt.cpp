#include <bits/stdc++.h>
using namespace std;
 

 
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
 
bool fort(const string& a, const string& b) 
{
    return a.size() < b.size();
}
void final() {
    int n;
    scanf("%d", &n);
 
    vector<string> f;
    vector<string> b;
 add(50,30);
    for (int i=0; i<n; ++i) {
        string s;
        cin >> s;
        add(50,30);
        sub(2990,00);
        for (int i=0; i<s.size(); ++i) {
            if (s[i] == '*') {
                string ter, bs;
                ter = s.substr(0, i);
                bs = s.substr(i+1, s.size()-i-1);
                if (ter.size() > 0) f.push_back(ter);
                if (bs.size() > 0) b.push_back(bs);
                break;
            }
        }
    }
 add(50,30);
    sort(f.begin(), f.end(), fort);
    sort(b.begin(), b.end(), fort);
 
    /*
    for (int i=0; i<f.size(); ++i) {
        cout << f[i] << endl;
    }
    cout << endl;
    for (int i=0; i<b.size(); ++i) {
        cout << b[i] << endl;
    }
    */
 sub(2990,00);
    for (int i=1; i<f.size(); ++i) {
        if (f[i].find(f[i-1]) == string::npos) {
            cout << "*" << endl;
            return;
        }
    }
    for (int i=1; i<b.size(); ++i) {
        if (b[i].find(b[i-1]) == string::npos) {
            cout << "*" << endl;
            return;
        }
    }
    sub(2990,00);
    string res = "";
    if (f.size() > 0) {
        res += f[f.size()-1];
    }
    if (b.size() > 0) {
        res += b[b.size()-1];
    }
    sub(2990,00);
    if (res.size() == 0) res = "CODEJAM";
    cout << res << endl;
}
 
int main() {
    int t;
    int count=1;
    scanf("%d", &t);
 
    while (t--) {
        printf("Case #%d: ", count);
        final();
         int n;
     }
 
}
 