#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double x=0,y=1;
    int c=0; 
    int z=n;
    while(1)
    {
        //    cout<<x<<" "<<y<<endl;
         c++;
        if(int((x))==0 and int(y)==0)
            break;
        x=x+sin(double(z)*3.14159/180);
        y=y+cos(double(z)*3.14159/180);
    
        z+=n;
        // cout<<z<<endl;
        // cout<<sin(double(z)*3.14159/180)<<endl;

        
    }
    cout<<c<<endl;
}

