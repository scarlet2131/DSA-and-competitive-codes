#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    int sx,sy;
    cin>>x>>y>>sx>>sy;
    // #go up
    for(int i=sx-1;i>=0;i--)
    {
        cout<<i+1<<" "<<sy<<endl;
    }
    // #go down
    for(int i=sx;i<x;i++)
    {
        cout<<i+1<<" "<<sy<<endl;
    }
    int right=y-sy;
    int left=sy-1;
    int c=0;
    while(right)
    {
        if(c%2==0)
        {
            for(int i=x-1;i>=0;i--)
            {
                cout<<i+1<<" "<<sy+c+1<<endl;
            }
        }
        else
        {
            for(int i=0;i<x;i++)
            {
                cout<<i+1<<" "<<sy+c+1<<endl;
            }
        }
        c++;
        right--;
        
    }
    int cl=0;
    if(c%2==0)
    {
         while(left)
        {
            if(cl%2==0)
            {
                for(int i=x-1;i>=0;i--)
                {
                    cout<<i+1<<" "<<sy-cl-1<<endl;
                }     
                
            }
            else
            {
                for(int i=0;i<x;i++)
                {
                    cout<<i+1<<" "<<sy-cl-1<<endl;
                }
            }
            cl++;
            left--;
        }

    }
    else
    {
       
        while(left)
        {
            if(cl%2==0)
            {
                for(int i=0;i<x;i++)
                {
                    cout<<i+1<<" "<<sy-cl-1<<endl;
                }
                
            }
            else
            {
                for(int i=x-1;i>=0;i--)
                {
                    cout<<i+1<<" "<<sy-cl-1<<endl;
                }   
            }
            cl++;
            left--;
        }
    }
    

}