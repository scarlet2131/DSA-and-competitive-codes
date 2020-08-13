
def find_num(base , x):
	l= len(x)-1
	sum = 0
	c=0
	while l>=0:
		v = 1
		if x[l]>='A':
			v = ord(x[l]) - 55
		else:
			v = ord(x[l]) - 48
		if v>=base:
			return -1
		sum = sum + v * (base**c)
		c += 1
		l -= 1
		if sum>10**12:
			return -1

	return sum




t= int(input())
while t>0:
	n =int(input())
	d = {}
	for z in range(n):
		b, s = input().split()
		b= int(b)
		d1 = {}
		if b==-1:

			for i in range(2,37):
				
				num=find_num(i,s)
				if num!=-1  and num not in d1:
					d1[num]=1
					if num not in d:
						d[num]=1
					else:
						d[num]+=1
		else:
			num=find_num(b,s)
			if num!=-1 and num not in d1:
				d1[num]=1
				if num not in d:
					d[num]=1
				else:
					d[num]+=1

	ans=-1
	for val in sorted(d.keys()):
		# print(val, d[val])
		if d[val]==n:
			ans=val
			break

	print(ans)
	t-=1


