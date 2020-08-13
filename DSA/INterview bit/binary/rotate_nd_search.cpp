#include<bits/stdc++.h>
using namespace std;


int binary(const vector<int> &A, int B,int ln, int rn,int pivot)
{
  
    int mid=0;
   
    mid = (ln+rn)/2;
    while(ln<=rn)
    {
        if(B==A[mid])
        {
            return mid;
        }
       mid = (ln+rn)/2;
       if(A[mid]<B)
       {
           ln=mid+1;
       }
       else 
       {
           rn=mid-1;
       }
    }
    return mid;
}
int search(const vector<int> &A, int B) {
    
    int l=0;
    int r=A.size()-1;
    int m= (l+r)/2;
    int pivot;
    while(l<=r)
    {
        m=(l+r)/2;
        if(A[m-1]<A[m] && A[m+1]>m)
        {
            l=m+1;
        }
        else if(A[m+1]>A[m] && A[m-1]>A[m])
        {
            r=m-1;
        }
        else if(A[m-1]<A[m] && A[m+1]<A[m])
        {
            pivot = m;
            break;
        }
        
    }
    cout<<"pivot"<<pivot<<endl;
    int mid = binary(A,B,0,pivot,pivot);
    int mi = binary(A,B,pivot+1,r-1,pivot);
   
   
    cout<<"mid"<<mid<<" "<<"mi"<<mi<<endl;
    if(mid!=0)
    {
        return mid;
    }
    else
    {
        return (mi+pivot+1);
    }
    
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int b;
  cin>>b;
  cout<<"b"<<b<<endl;
  vector<int >v;
  for(int i=0;i<n;i++)
  {
    v.push_back(a[i]);
  }
  int k =search(v,b);
  cout<<"k"<<k<<endl;
}

// 180, 181, 182, 183, 184, 187, 188, 189, 191, 192, 193, 194, 195, 196, 201, 202, 203, 204, 3, 4, 5, 6, 7, 8, 9, 10, 14, 16, 17, 18, 19, 23, 26, 27, 28, 29, 32, 33, 36, 37, 38, 39, 41, 42, 43, 45, 48, 51, 52, 53, 54, 56, 62, 63, 64, 67, 69, 72, 73, 75, 77, 78, 79, 83, 85, 87, 90, 91, 92, 93, 96, 98, 99, 101, 102, 104, 105, 106, 107, 108, 109, 111, 113, 115, 116, 118, 119, 120, 122, 123, 124, 126, 127, 129, 130, 135, 137, 138, 139, 143, 144 145 147 149 152 155 156 160 162 163 164 166 168 169 170 171 172 173 174 175 176 177