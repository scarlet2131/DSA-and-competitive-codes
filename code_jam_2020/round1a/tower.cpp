from sys import stdin,stdout

t = int(stdin.readline())
while t>0:
    n = int(stdin.readline())
    a = list( map(int,stdin.readline().split()) )
    b = [ a[i] for i in range(len(a)) ]
    b = sorted(b,reverse=True)
    l=0
    d = {}
    for i in range(n):
        d[a[i]] = 1
        if len(b) > 0 and a[i]==b[0]:
            while True:
                if len(b)==0:
                    break
                x = b[0]
                if x not in d:
                    break
                else:
                    stdout.write("{} ".format(x))
                    b.pop(0)
            stdout.write("\n")
        else:
            stdout.write("Not possible\n")
    t-=1