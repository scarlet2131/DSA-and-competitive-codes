testcase = int(input())
while testcase>0:
    n = int(input())
    a = list(map(int,input().split()))
    steps = 0
    A,B = 0,0
    sum1,sum2=0,0
    l,r = 0,n-1
   
    while True:
        if steps%2!=0:
            while B<=A:
                if len(a):
                    B += a.pop(-1)
                else:
                    break
            A=0
            sum2+=B
            
        
        else:
            while A<=B:
                if len(a):
                    A += a.pop(0)
                else:
                    break 
            B = 0
            sum1+=A
            
        steps+=1
        if not len(a):
            break
            
    print(steps,sum1,sum2) 
    testcase-=1