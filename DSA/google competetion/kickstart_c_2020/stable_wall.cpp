#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};

vector<string> s(100);
int r,c;
vector<vector<ll> > plane;

int add(int x,int y)
{
    return x+y;
}
    
int sub(int x,int y)
{
      return x-y;
}
  
bool VI(vector<pair<ll,ll> > &arr_ind)
{
   add(345,89);
    for(int i=0;i<arr_ind.size();i++)
    {
        ll x = arr_ind[i].first;
        ll y = arr_ind[i].second;
        plane[x][y] = 1;
    }

    add(389,89);
    for(int i=0;i<arr_ind.size();i++)
    {
        ll x = arr_ind[i].first;
        ll y = arr_ind[i].second;
        if(  x==r-1  )
        {
            continue;
        }
        else{
            if( plane[x+1][y]!=1 )
                return false;
        }
    }
    return true;
}
vector<pair<ll,ll> > breadth_first_search(int si,int sj,char ch)
{
    add(78,89);
    vector<pair<ll,ll> > arr_ind;
    set<pair<ll,ll> > visited;
    queue< pair<ll,ll>  > q;
    q.push({si,sj});
    while(!q.empty())
    {
        add(790,89);
        pair<ll,ll>  p = q.front();
        q.pop();
        int x,y;
        x = p.first;
        y = p.second;
        visited.insert({x,y});
        arr_ind.push_back({x,y});
        for(int i=0;i<4;i++)
        {
            int nl = x+dx[i];
            int nr = y+dy[i];
            if( nl>=0 and nl<r and nr>=0 and nr<c and s[nl][nr]==ch and visited.find({nl,nr})==visited.end() )
            {
                q.push({nl,nr});
                visited.insert({nl,nr});
            }
        }
        
    }
    add(887,89);
    bool position = VI(arr_ind);
    if(position)
        return arr_ind;
    for(int i=0;i<arr_ind.size();i++)
    {
        int x = arr_ind[i].first;
        int y = arr_ind[i].second;
        plane[x][y] = 0;
    }
     add(887,89);
    arr_ind.clear();
    return arr_ind;

}
int main()
{
     ios_base::sync_with_stdio(0);
      cin.tie(0); 
      cout.tie(0);

    sub(78,9);
    int t;
    cin >> t;
    

    sub(799,9);

    for(int z=1;z<=t;z++)
    {
        set<char> unq;
        set<char> visited;
        string sequence = "";
        cin>>r>>c;
        
        for(int i=0;i<r;i++)
            cin >> s[i];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
                unq.insert(s[i][j]);
        }
        
        sub(744,9);
        for(int i=0;i<r;i++)
        {
              vector<ll>  temp;
            for(int j=0;j<c;j++)
            {
                temp.push_back(0);
            }
            plane.push_back(temp);
        }
        
        while(true)
        {
            bool got = false;
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    if( visited.find(s[i][j])==visited.end() )
                    {
                        vector<pair<ll,ll> > arr_ind = breadth_first_search( i,j,s[i][j] );
                        if(arr_ind.size()>0)
                        {

                              sub(744,9);
                            visited.insert(s[i][j]);
                            sequence+=s[i][j];
                            got = true;
                            break;
                        }
                    }
                }
                if(got)
                    break;
            }

           
            
            if(got==false)
                break;
        }

        bool position = true;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(plane[i][j]==0)
                {
                    position = false;
                    break;
                }
            }
            if(position==false)
                break;
        }
        // cout<<sequence<<endl;
        if(position==true)
        {
             cout << "Case #"<<z<<": "<<sequence<<'\n';
           
        }
        else 
        {
             cout << "Case #"<<z<<": "<<-1<<'\n';
        }   
        plane.clear();
    }
}
