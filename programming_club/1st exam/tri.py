# t = int(input())
# for z in range(t):
import sys
n, m = map(int,sys.stdin.readline().split())
a = list( map( int,sys.stdin.readline().split() ) )
# print(len(a))
# print(a)
M = 0
ans = []
for i in range(n):
    M = 99999999
    for j in range(m):
        if abs(a[j] - i) < M:
            M = abs(a[j] - i)
    ans.append(M)


print(sorted(ans)[-1])