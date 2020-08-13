import sys

n, m = map(int,sys.stdin.readline().split())
a = list( map( int,sys.stdin.readline().split() ) )
L = 999999
dpL = [0]*n
dpR = [0]*n

if 0 in a:
	dpL[0] = 0
else:
	dpL[0] = L
i = 1
while i < n:
	if i in a:
		dpl[i] = 0
	else:
		dpL[i] = dpL[i-1]+1
	i += 1
i = 1
if n-1 in a:
	dpR[n-1] = 0
else:
	dpR[n-1] = L
while i >= 0:
	if i in a:
		dpR[i] = 0;
	else:
		dpR[i] = dpR[i+1] + 1
ans = 0
for i in range(n):
	ans = 
