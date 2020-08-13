import java.io.*;

class rabit {
  
    public static void main(String args[] ) throws Exception {
       BufferedReader scan =new BufferedReader(new InputStreamReader(System.in));
       int t= Integer.parseInt(scan.readLine());
       int n=10001;
       int[] s= new int[n+1];
       boolean[] prime =new boolean[n+1];
        for(int i=2;i<=n;i+=2)
        {
            s[i] = 2;
        }
        for(int i=3;i<=n;i+=2)
        {
            if(prime[i]==false)
            {
                s[i]=i;
                for(int j=i;j*i<=n;j+=2)
                {
                    if(prime[i*j]==false)
                    {
                        prime[i*j]=true;
                        s[i*j]=1;
                    }
                }
            }
        }
      

        int z = 1000001;
        int[] dp = new int[z];
        // int[] s= new int[n+1];
        // seive(n,s);
        // System.out.println("1");
        dp[0]=0;
        dp[1]=0;
        for(int i=2;i<z;i++)
        {
            int x=i;
            int curr = s[i];
            int count = 1;
            int ans=0;
            // System.out.println("23");
            while(x>1)
            {
                cout<<"1";
                x=x/s[x];
                if(curr == s[x])
                {
                    count++;
                    continue;
                }
                ans+=count;

                curr=s[x];
                count = 1;
            }
            dp[i]=ans;
        }
        
       
       int sum=0;
       while(t-- >0)
       {
            int m= Integer.parseInt(scan.readLine());
             System.out.println(dp[m]);
       }
     

    }
}
