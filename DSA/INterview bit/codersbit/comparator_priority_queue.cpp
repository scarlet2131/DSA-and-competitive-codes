/*

*/

struct myComp{
    bool operator()(pair<int,int> a,pair<int,int> b)
    {
        return a.first<b.first || (a.first==b.first && a.second<b.second);
    }
};
string Solution::solve(vector<int> &A) {
    
    
    priority_queue< pair<int,int>,vector< pair<int,int> > ,myComp> x,y;

    for(int i=0;i<A.size();i++)
    {
        int s=0,pr=1;
        int p=A[i];
        while(A[i]>0)
        {
          s+=A[i]%10;
          pr*=A[i]%10;
          A[i]=A[i]/10;
        }
        
        
        x.push({s,p});
        y.push({pr,p});
    }
    while(!x.empty())
    {
        pair<int,int> p=x.top();
        x.pop();
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    while(!y.empty())
    {
        pair<int,int> p=y.top();
        y.pop();
        cout<<p.first<<" "<<p.second<<endl;
    }
}
