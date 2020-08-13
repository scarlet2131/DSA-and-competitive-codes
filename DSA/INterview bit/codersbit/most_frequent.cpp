#include<bits/stdc++.h>
using namespace std;
int main()
{

string A;
cin>>A;
 int B;
 cin>>B;
 int l=A.length();
 map<string,int> m;
 map<string,int>::iterator itr;
    int k=0;
    
    string str="";
    
        
        for(int i=0;i<=A.length()-B;i++)
      {
        for(int j=i;j<i+B;j++)
        {
           str+=A[j];
        }
        m[str]++;
        str="";
        
      }
      
      
    for(itr=m.begin();itr!=m.end();itr++)
    {
        
        cout<<itr->first<<" "<<itr->second<<endl;
    }




    
}
