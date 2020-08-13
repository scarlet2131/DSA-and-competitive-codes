from collections import defaultdict
n,k = [int(n) for n in input().split()]
q,c = [int(q) for q in input().split()]
s = set()
for i in range(k):
	x,y = [int(x) for x in input().split()]
	s.add( (x-1,y-1) )
# print(s)
#back left diagonal -------------
i,j = q-1,c-1
count = 0
while i>=0 and i<n and j>=0 and j<n:
	if (i,j) in s:
		break
	else:
		count+=1
	j-=1
	i-=1
count-=1
# print(count,end='back dia -left')
# print()

#down right diagonal--------
i,j = q-1,c-1
while i>=0 and i<n and j>=0 and j<n:
	if (i,j) in s:
		break
	else:
		count+=1
		# print(i,end=' ')
		# print(j)
	j+=1
	i+=1
count-=1
# print(count,end='front dia -down')
# print()
#front right diagonal-------
i,j = q-1,c-1
while i>=0 and i<n and j>=0 and j<n:
	if (i,j) in s:
		break
	else:
		count+=1
		# print(i,end=' ')
		# print(j)
	j+=1
	i-=1
count-=1
# print(count,end='front dia -up')
# print()
#back down diagonal---------
i,j = q-1,c-1
while i>=0 and i<n and j>=0 and j<n:
	if (i,j) in s:
		break
	else:
		count+=1
		# print(i,end=' ')
		# print(j)
	j-=1
	i+=1
count-=1
# print(count,end='back dia -down')
# print()
#row check-------------
for i in range(c-1,n):
	if i==c-1:
		continue
	else:
		if (q-1,i) in s:
			break
		else:
			count+=1
# print(count,end='row right')
# print()
#--------------
for i in range(c-1,-1,-1):
	if i==c-1:
		continue
	else:
		if (q-1,i) in s:
			break
		else:
			count+=1
# print(count,end='row left')
# print()
#column check-------------
for i in range(q-1,n):
	if i ==q-1:
		continue
	else:
		if (i,c-1) in s:
			break
		else:
			count+=1
# print(count,end='col down')
# print()
#----------------------
for i in range(q-1,-1,-1):
	if i == q-1:
		continue
	else:
		if (i,c-1) in s:
			break
		else:
			count+=1
# print(count,end= 'col up')
# print()

print(count)
