def bin_search(b,k):
	ans = 0
	# print(k)
	l,r=0,len(b)-1
	while l<=r:
		mid =(l+r)//2
		if b[mid]<=k:
			ans = mid
			l=mid+1
		else:
			r = mid-1
	return ans
n,d = [int(n) for n in input().split()]
s = input()
b = []
for i in range(len(s)):
	if s[i]=="1":
		b.append(i)

f =0
i =0
c =0
for i in range(1,len(b)):
	if b[i-1]+d<b[i]:
		f=1
		break
if f==0:
	i=0
	while i<len(b):
		x = bin_search(b,b[i]+d)
		i = x
		c+=1
		if x==len(b)-1:
			break
if f==1 or b[i]!=n-1:
	c=-1
print(c)


