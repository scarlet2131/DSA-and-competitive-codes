from sys import stdin, stdout
testcase = int(stdin.readline())
import math
while testcase>0:
    n,k = map(int,stdin.readline().split())
    if n<k:
        print("NO")
    elif n%2:
        if k%2==0:
            print("NO")
        else:
            print("YES")
            for i in range(k-1):
                print("1 ",end=' ')
            print(n-k+1)    
    elif n==k:
        print("YES")
        for i in range(k):
            print("1 ",end =' ')
        print()
    
    else:
        
        if k%2==0:
            print("YES")
            for i in range(k-1):
                print("1 ",end=' ')
            print(n-1*(k-1))
        else:
            if k>n//2:
                print("NO")
            else:
                print("YES")
                for i in range(k-1):
                    print("2 ",end=' ')
                print(n-2*(k-1) )
            
    testcase-=1