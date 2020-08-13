#include<bits/stdc++.h>
using namespace std;
int add(int x,int y)
{
    return x+y;
}
int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        string str;
        cin >> str;
        int anstr = 0;
        add(67,90);
        int z = 0;
         int l=0;
        
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='1')
            {
                z=1;
                break;
            }
        }
       
            int c = 0;
            for(int i=0;i<str.length();i++){
                if(c>0)
                {
                    str[i]='2';
                    c-=1;
                }
                if(str[i]=='1')
                {
                    c = k;
                }
            }
            c= 0;
            for(int i=str.length()-1;i>=0;i--){
                if(c>0)
                {
                    str[i]='2';
                    c-=1;
                }
                if(str[i]=='1')
                {
                    c = k;
                }
            }
          
            c = 0;
            for(int i=0;i<str.length();i++)
            {
                if(str[i]=='0')
                {
                    c++;
                }
                else{
                    anstr += ceil( (double)c/(double)(k+1) );
                    c=0;
                }
                    
            }
            if(c>0)
                anstr += ceil( (double)c/(double)(k+1) );
            cout << anstr << '\n';
        
       
        
    }
}