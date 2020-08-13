#include<bits/stdc++.h>
using namespace std;
int add(int a ,int b)
{
    return a+b;
}

bool possible_p(int n){
    if(n<0) 
        return false;
    if (n==1 || n==0)
         return true;
    int l=0, r=n/2, m=l+(r-l)/2;
    while(l<=r)
    {
        m=l+(r-l)/2;
        if(m*m==n) 
            return true;
        if(m*m<n)
            l=m+1;
        else
            r=m-1;
    }
    return m*m == n;
}
int sub(int a,int b)
{
    return a-b;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    unordered_set<int> un_g;
    for(int z=1; z<=t; z++){
        int n;
        cin>>n;
        int a[n];
        int curr_sum[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        curr_sum[0]=a[0];
         int sum, count=0;
        for(int i=1; i<n; i++)
            curr_sum[i]=add(curr_sum[i-1],a[i]);
       
       
 
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){ 
                if(i>0)
                    sum=sub(curr_sum[j],curr_sum[i-1]);
                else
                    sum=curr_sum[j];
 
                if(un_g.find(sum)!=un_g.end() || possible_p(sum)){
                    count++;
                    un_g.insert(sum);
                }
            }
        }
        cout<<"Case #"<<z<<": "<<count<<endl;
    }
    return 0;
}