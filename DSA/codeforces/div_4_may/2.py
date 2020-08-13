a,b,c,k= [int(x) for x in input().split()]
if a>=k:
	ans = k
elif a+b>k and a<k:
	ans = a
else: 
	x=k-a-b
	ans = a-x
print(ans)