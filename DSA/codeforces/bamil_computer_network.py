n = int(input())
a = list(map(int,input().split()))
ans = []
ans.append(n)
x=n-2
while a[x]!=1:
	ans.append(a[x])
	x = a[x]-2
ans.append(1)
ans= ans[::-1]
for i in range(len(ans)):
	print(ans[i],end=' ')
print()
	
