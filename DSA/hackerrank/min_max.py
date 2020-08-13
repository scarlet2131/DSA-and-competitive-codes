n = int(input())
k = int(input())
a = []
for i in range(n):
	x = int(input())
	a.append(x)
a.sort()
# print(a)
prefix = []
mi = 10**18
ma = 0
for i in range(k):
	if a[i]>ma:
		ma=a[i]
	if a[i]<mi:
		mi=a[i]
	prefix.append(a[i])

diff = ma-mi
# print(prefix)
# print(diff)
sub=10**18
for i in range(k,n):
	prefix.pop(0)
	prefix.append(a[i])
	# print(prefix)
	ma = 0
	mi = 10**18
	# print(ma,mi)
	
	if prefix[k-1]>ma:
		ma=prefix[k-1]
	if prefix[0]<mi:
		mi=prefix[0]
	
	sub= ma-mi
	# print(sub,end=' sub ')
	# print(ma,end=" ")
	# print(mi)
	if sub<diff:
		diff=sub
	# print(diff)
print(diff)
