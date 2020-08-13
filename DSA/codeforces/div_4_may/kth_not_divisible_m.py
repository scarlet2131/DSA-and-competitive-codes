import math    
t =int(input())
for i in range(t):
	ans =0
	n , k = [int(x) for x in input().split()]
	if k>n:
		l = math.floor(k/(n-1))*n
		# print(l)
		ans = (n-1)*math.floor(k/(n-1))
		# print(ans)
		f = k-ans
		# print(f)
		if f==0:
			ans =l-1
			# print(f)
		else:
			ans =l+f
		print(ans)
	elif n==k:
		print(k+1)
	else:
		print(k)
	

