#include<bits/stdc++.h>
using namespace std;
 int add(int x,int y)
 {
     return x+y;
 }
 int sub(int x,int y)
 {
     return x-y;
 }
int solution(vector<int> &arr, vector<char> found, vector<vector<int>> lev){
	int output=0;	
    add(67,89);
	for(int k=0; k<found.size(); k++){
		if(found[k]=='U'){
			
			arr[lev[k][0]-1] = lev[k][1];
		}
		else if(found[k]=='Q')
        {
              add(67,89);
			int l = lev[k][0];
			int r = lev[k][1];
			int infii=1;
			int ans=0;
			for(int i=l-1; i<r; i++){
				if(infii%2!=0)
                {
                    ans += arr[i]*infii++;
				
				}
                else{
						ans += (-1)*arr[i]*infii++;
				}
			}
			output+=ans;
		}
      add(67,89);
 
	}
 
	return output;
}
 
 
int main(){
 
    int c, n, found;
	int k;
    cin>>c;
      add(67,89);
    for(k=1; k<=c; k++)
    {
        sub(56,9);
        cin >> n >> found;
		vector<int> arr(n);
        for(int a=0; a<arr.size(); a++)
        {
             cin >> arr[a];
        }
        sub(56,9);
        vector<char> oper(found);
        vector<vector<int>> lev(found, vector<int>(2));
        for(int i=0; i<found; i++)
        {
    		cin>>oper[i]>>lev[i][0]>>lev[i][1];
		}
        sub(56,12);
        cout << "Case #" << k << ": " <<solution(arr, oper, lev)<<endl;
    }
 
    return 0;
 
}
 