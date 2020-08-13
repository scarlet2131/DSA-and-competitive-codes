n = int(input())
a = list(map(int,input().split()))
a.sort()
m = 10**18
ans = []
for i in range(1,len(a)):
	if a[i]-a[i-1]<m:
		m = a[i]-a[i-1]
for i in range(1,n):
	if a[i]-a[i-1]==m:
		ans.append(a[i-1])
		ans.append(a[i])
for i in range(len(ans)):
	print(ans[i],end=' ')
print()



