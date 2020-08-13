from sys import stdin, stdout
from collections import defaultdict

def main():
    a,b = map(float,stdin.readline().split())
    res= float(a*b)
    d= str(res)
    ans =[]
    ans = d.split('.')
    print(ans[0])

main()