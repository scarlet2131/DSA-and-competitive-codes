#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
int t;
cin >> t;
while(t--)
{
int n;
cin >> n;
map<ll,vector<pair<ll,ll> > > mp;
for(int i=0;i<n;i++)
{
ll x,y,z;
cin >> x >> y >> z;
mp[z].push_back({x,y});
}

for(auto it=mp.begin();it!=mp.end();it++)
{
vector<pair<ll,ll> > v = it->second;
sort(v.begin(),v.end());
it->second = v;
}
int flag=0;
for(auto it=mp.begin();it!=mp.end();it++)
{
vector<pair<ll,ll> > v = it->second;
for(int j=0;j<v.size();j++)
{
ll a = v[j].second;
ll c = 0;
for(int k=j+1;k<v.size();k++)
{
if(v[k].first < a)
{
c++;

}
}
if( c>1 )
{
flag=1;
break;
}


}
if(flag)
break;
}
if( flag)
	cout << "NO\n";
else
	cout << "YES\n";

}
}
