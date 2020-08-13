#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];
bool safe(int x,int y)
{
	return (a[x][y]==0); 
	
}

bool isPossible(int sx, int sy, int dx, int dy)
{
   
    memset(a,0,sizeof(a));
    int fx[2]={1,0};
    int fy[2]={0,1};
    if(sx==dx and sy==dy)
    {
        return true;
    }
    for(int i=0;i<2;i++)
    {
        int nl=fx[i]+sx;
        int nr=fy[i]+sy;
        if(safe(nl,nr))
        {
            a[nl][nr]=1;
            isPossible(nl,nr,dx,dy);
            a[nl][nr]=0;
            
        }
       
        
    }
    return false;
}
int main()
{
    int n;
    cout<<isPossible(3,2,5,7)<<endl;
}