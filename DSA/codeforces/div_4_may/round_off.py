t = int(input())
for j in range(t):
	n = int(input())
	s = []
	c = 0
	while n>0:
		rem = n%10		
		if rem>0:
			s.append(str(rem)+c*("0"))
		c+=1
		n=n//10
	print(len(s))
	for i in range(len(s)):
		print(s[i],end=' ')
	print()


