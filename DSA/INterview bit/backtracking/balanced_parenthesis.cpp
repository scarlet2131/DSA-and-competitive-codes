#include<bits/stdc++.h>
using namespace std;
// int top=-1;
// char s[100];
// void push(char x,int n)
// {
    
   
//         s[++top]=x;
    
// }
// void pop()
// {
   
//         top--;
    
// }
stack<char> s;
// int count=0;
void valid_parenthesis(int n,string ans,int level,int &count)
{
   
    count++;
  
    if(level==n)
    {
        int c=0;
        // top = -1;
        while(!s.empty())
            s.pop();
        for(int i=0;i<ans.length();i++)
        {
            if(ans[i]=='(')
            {
                char x='(';
                s.push(x);
            }
            else if(ans[i]==')' and !s.empty() )
            {

                s.pop();
            }
            else
            {
                return; 
            }
            
        }
        if(s.size()==0)
        {
            cout<<ans<<endl;
        }
        return;
    }

    valid_parenthesis(n,ans+"(",level+1,count);

    valid_parenthesis(n,ans+")",level+1,count);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count=0;
        string ans="";
        valid_parenthesis(2*n,ans,0,count);
        cout<<count<<endl;
    }
}