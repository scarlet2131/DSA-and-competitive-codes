from sys import stdin,stdout
testcase = int(input())
while testcase>0:
    n,k = [int(x) for x in input().split()]
    if n==k:
        print(k+1)
    elif n>k:
        print(k)
    else:
        result = 0
        r = k%(n-1)
        q = k//(n-1)
        if r==0:
            result = n*q - 1
        else:
            result = n*q + r
        print(result)
    testcase-=1