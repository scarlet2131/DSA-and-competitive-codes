int  Solution::pow(int  x,  int n,  int  d) {
    long long int  result =1 ;
    long long int  a= x;
    while(n>0)
    {
        if(n%2==1)
        {
            result = (result%d*a%d)%d;
        }
        n= n/2;
        a = (a%d*a%d)%d;
        
    }
    // cout<<result;
    
    if(result<0)
    {
        result= d+result; 
    }
    else
    {
        result = result %d;
    }
    return result;
}

