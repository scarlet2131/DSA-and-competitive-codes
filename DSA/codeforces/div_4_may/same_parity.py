t = int(input())
for j in range(t):
	n, k = [int(x) for x in input().split()]
	ans = []
	f=0
	
	for i in range(k-1):
		ans.append(1)
	z = n-(k-1)
	if z%2==1 and z>0:
		ans.append(z)
		f=1
	if f==0:
		f=0
		ans.clear()
		for i in range(k-1):
			ans.append(2)
		z= n-(k-1)*2
		if z%2==0 and z>0:
			ans.append(z)
			f=1
	if f==1:
		print("YES")
		for i in range(len(ans)):
			print(ans[i],end=' ')
		print()
	else:
		print("NO")



