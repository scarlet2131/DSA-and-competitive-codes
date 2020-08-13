#include<bits/stdc++.h>
using namespace std;
int getnum(string s)
{
    int l =s.length();
    int sum = 0;
    for(int i=0;i<l;i++)
    {
        sum = sum*10+s[i]-'0';
    }
    return sum;
}
int main()
{
    string s;
    cin>>s;
   vector<string> vect;
   std::stringstream ss(s);
   string intermediate;
   while(getline(ss, intermediate, ','))
   {
       vect.push_back(intermediate);
   }
//   for(size_t i=0;i<vect.size();i++)
//   {
//       cout<<vect[i]<<endl;
//   }

  string b;
  string ans="";
  int g=1;
  ans =ans+ "1"+vect[0];
  for(int i=0;i<vect.size()-1;i++)
  {
      if(i==0)
      {
          cin.ignore();
      }
      getline(cin,b);
      
        vector<pair<int,string> > v;
      std::stringstream t(b);
      string inter;
        vector<string> x;
      while(getline(t, inter ,' '))
      {
          
          x.push_back(inter);
           
      }
      int num = getnum(x[2]);
      v.push_back(make_pair(num,x[3]));
      g=g*v[v.size()-1].first;
      int val =v[i].first*g;
      ans += " = " + std::to_string(val)+v[i].second;
   // cout<<b<<endl;
  }
  cout<<ans<<endl;
  }