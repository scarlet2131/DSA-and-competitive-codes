#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    


    ll t;
    cin>>t;
    for(int b=0;b<t;b++)
    {
    cout << "Case #" << b+1 << ": " << endl;
    int n;
    cin >> n;
    add(3,10);
    int counter = 1;
    int ad = 1;
    int s = 0;
    while(n>0)
    {
        if(n>ad)
        {
            add(34,50);
            if(!s)
            {

                for(int i=0;i<counter;i++)
                    cout << counter << ' ' << i+1 << endl;
            }
            else
            {
                sub(50,30);
                for(int i=counter-1;i>=0;i--)
                    cout << counter << ' ' << i+1 << endl;
            }
            n =n- ad;
            sub(40,20);
            s = s^1;
        }
        else
        {
            add(23,10);
            if(!s)
                cout << counter << ' ' << counter << endl;
            else
                cout << counter << ' ' << 1 << endl;
            n--;
        }
        add(40,30);
        counter++;
        ad=ad*2;
        cout<<ad<<endl;
    }
}
} 