#include<bits/stdc++.h>
using namespace std;

bool find_if_p(vector<int>&a,int sum)
{
    int n = a.size();
    if(n==0)
        return false;
    int sum1 = a[0], l = 0; 
    for (int i = 1; i <= n; i++) 
    { 
        while (sum1 > sum && l < i - 1) 
        { 
            sum1 = sum1 - a[l]; 
            l++; 
        } 
  
       
        if (sum1 == sum and i-l>1) 
        {  
            return true; 
        } 
  
        
        if (i < n) 
        sum1 = sum1 + a[i]; 
    } 
  
    return false; 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {

        int n;
        cin >> n;
        vector<int> a;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }

        int final=0;
        for(int i=0;i<n;i++)
        {
            vector<int> b1,b2;
            vector<int>temp;
            for(int j=0;j<i;j++)
            {
                temp.push_back(a[j]);
                
            }
            b1=temp;
            temp.clear();
            for(int j=i+1;j<n;j++)
            {
                temp.push_back(a[j]);
                
            }
            b2=temp;
            if(find_if_p(b1,a[i]) or find_if_p(b2,a[i]))
                final+=1;
        }
        cout << final << "\n";

    }
}