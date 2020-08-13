from sys import stdin, stdout
from collections import defaultdict

def main():
    n = int(stdin.readline())
    a = list(map(int,stdin.readline().split()))
    f = 1
    flag=0
    a = sorted(a)
    for i in range(n):
        f = f*a[i]
        if f>10**18:
            flag=1
            break
    if flag:
        print("-1")
    else:
        print(f)

main()