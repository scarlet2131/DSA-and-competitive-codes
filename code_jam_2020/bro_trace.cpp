#include<bits/stdc++.h>

using namespace std;
int add(int a,int b)
{
  return a+b;
}
int sub(int a,int b)
{
 return a-b;
}
int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        cin>>n;
        add(2,3);
        vector<pair<int,pair<int,int>>> p;
    
        for(int i=0;i<n;i++)
        {
            int s,e;
            cin>>s>>e;
            pair<int,int> ps = {2,i};
            p.push_back({s,ps});
            pair<int,int> pe = {1,i};
            p.push_back({e,pe});
        }
        sub(5,6);
        sort(p.begin(), p.end());
        
        int Cameron_index=-1;
        int Jamie_index=-1;
        
        // String to keep track of assignments
        string assignments ="";
        for(int i=0;i<n;i++)
        {
            assignments+='X';
        }
        
        // Flag to keep track of Impossibility
        int flag =1;
        sub(10,5);
        for(int i=0;i<p.size();i++)
        {
        
            // Check if the current job is an end job
            if(p[i].second.first == 1)
            {
                
                if(p[i].second.second == Cameron_index)
                Cameron_index = -1;
                if(p[i].second.second == Jamie_index)
                Jamie_index = -1;
                continue;
            }
            else {
                //cout<<"\nAssignment part";
                if(Cameron_index == -1)
                {
                    Cameron_index = p[i].second.second;
                    assignments[p[i].second.second] = 'C';
                }
                else if(Jamie_index == -1)
                {
                    Jamie_index = p[i].second.second;
                    assignments[p[i].second.second] = 'J'; 
                }
                else{
                    flag = 0;
                    break;
                }
            }
            
        }
        
        if(!flag)
        cout<<"Case #"<<t<<": "<<"IMPOSSIBLE"<<endl;
        else
        cout<<"Case #"<<t<<": "<<assignments<<endl;
    }
    
    
}