import math
s = input()
l = len(s)
floor = math.floor(math.sqrt(l))
ceil = math.ceil(math.sqrt(l))
# print(l,end=' l ')
# print(floor,end=' floor ')
# print(ceil,end=' ceil ')
d = []
c =0
x = 0
if floor*ceil<l:
	floor+=1
while c<floor:
	# print(c)
	f = ""
	for i in range(ceil):
		# print(x+i)
		# print(s[x+i])
		if(x+i<l):
			f += s[x+i]
		else:
			f+= '-'
			
	d.append(f)
	x+=ceil
	c+=1
# print(d)
for i in range(ceil):
	ans =""
	for j in range(floor):
		if d[j][i]!='-':
			ans+= d[j][i]
	print(ans,end=' ')

print()	
# print(d)