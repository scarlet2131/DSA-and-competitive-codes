#include<bits/stdc++.h>
using namespace std;

struct comp{
    bool operator()(pair<pair<int,int>,int> &a, pair<pair<int,int>,int>&b)
    {
        int length = a.second,length2=b.second;
        int x = a.first.first, y = b.first.first;
        return length<length2 or (length==length2 and x>y); 
    }
};
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
    return b-a;
}
int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        priority_queue< pair<pair<int,int>, int>, vector< pair<pair<int,int>,int> >, comp > q;
        set<pair<int,int>> visited;
        set<int> position;
        q.push( {{0,n-1},n}  );
        int play = 1;
        sub(78,899);
        int a[n]={0};
        add(79,89);
        while(!q.empty())
        {
            pair<pair<int,int>,int> p = q.top();
            q.pop();
            int l,r,len;
            l = p.first.first;
            r = p.first.second;
            len = p.second;
            visited.insert({l,r});
            int l1,r1,length;
            
            if( len%2==0 )
            {
                a[ (l+r-1)/2 ] = play;
                play+=1;
                int back_pos = (l+r-1)/2;
                position.insert(back_pos);
                if(position.size()==n)
                    break;
                l1 = l;
                r1 = back_pos-1;
                length = r1-l1+1;
                if( r1>=0 and visited.find({l1,r1})==visited.end())
                    q.push( {{l1,r1},length} );

                l1 = back_pos+1;
                r1 = r;
                length = r1-l1+1;
                if(l1<n and visited.find({l1,r1})==visited.end())
                    q.push( {{l1,r1},length} );

               add(799,89);
                
            }
            else
            {
                a[ (l+r)/2  ] = play;
                play++;
                int back_pos = (l+r)/2;
                position.insert(back_pos);
                if(position.size()==n)
                    break;
                l1 = l;
                r1 = back_pos-1;
                length = r1-l1+1;
                if(r1>=0 and visited.find({l1,r1})==visited.end())
                    q.push( {{l1,r1},length} );

                l1 = back_pos+1;
                r1 = r;
                length = r1-l1+1;
                add(799,89);
                if( l1<n and visited.find({l1,r1})==visited.end())
                    q.push( {{l1,r1},length} );
            }
            

        }
        for(int i=0;i<n;i++)
        {
            cout << a[i] << " ";
        }
        cout << '\n';
    }
}
