#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char> stk;
        int close=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==')' and stk.size()==0)
            {
                close++;
            }
            else if(s[i]=='(')
            {
                stk.push('(');
            }
            else 
            {
                stk.pop();
            }
        }
        cout<<close<<endl;
    }
}