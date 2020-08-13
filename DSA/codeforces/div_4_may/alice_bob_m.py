t = int(input())
for i in range(t):
	n = int(input())
	a = list(map(int,input().split()))
	l, r=0,n
	curra,currb=a[0],0
	suma,sumb=a[0],0
	c = 1
	while l<r-1 and c<n:
		if c%2==0:
			curra=0
			while curra<=currb and l<r-1:
				l+=1
				suma+=a[l]
				curra+=a[l]
				
			# print(curra," currra ")
		else:
			currb=0
			while currb<=curra and l<r-1:
				r-=1
				sumb+=a[r]
				currb+=a[r]
				
			# print(currb," currrb ")
		c+=1
	print(c,suma,sumb)


		
	