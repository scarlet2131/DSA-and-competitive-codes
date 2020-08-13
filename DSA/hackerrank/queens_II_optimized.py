n,k = [int(n) for n in input().split()]
q,c = [int(n) for n in input().split()]
#8 direction queen can traverse 
dx= [0,-1,-1,-1,0,1,1,1]
dy =[-1,-1,0,1,1,1,0,-1]
s = set()
for i in range(k):
	x,y = [int(x) for x in input().split()]
	s.add((x-1,y-1))
count = 0
for i in range(8):
	lx,ly = q-1,c-1
	#keep going in tht direction until you are outside the board or found the obstacle
	while True:
		lx,ly = dx[i]+lx,dy[i]+ly
		if 0<=lx<n and 0<=ly<n:
			if (lx,ly) in s:
				break
			else:
				count+=1
		else:
			break
print(count)
