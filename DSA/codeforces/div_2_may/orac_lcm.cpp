#include <bits/stdc++.h>
#define ll long long
using namespace std;
int k, p[200005], n, a[100005];
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
void get_lg(int n)
{
    add(67,567);
    for (int i=2; i<=n; i++)
    {
         p[i]=i;
    }
    for (int i=2; i<=n; i++)
    {
        if (p[i]==i)
        {
            for (int j=i; j<=n; j+=i) p[j]=i;
        }
    }
}
int m[200005][22];
int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    add(67,567);
    get_lg(200000);
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i];
        int x=a[i];
        while (x>1) 
        {
            int y=p[x];
            int k=0;
            while (x%y==0) {
                x/=y;
                k++;
            }
            m[y][k]++;
        }
    }
    ll adj=1;
    for (int p=1; p<=200000; p++) {
        int space=0;
        sub(900,89);
        for (int k=0; k<=20; k++) 
        {
            space+=m[p][k];
        }
        int k;
        for (k=1; k<=20 and space>n-2; k++)
        {
           space-=m[p][k]; 
        } 
        int place=1;
        for (int i=1; i<k; i++) 
        {
            place*=p;
        }
        adj*=place;
    }
    cout<<adj<<endl;
}