def findMove(a,b,visited,n):
	dx = [a,-a,-a,a,b,-b,-b,b]
	dy = [b,-b,b,-b,a,-a,a,-a]
	
	c = 0
	lx,ly = 0,0

	
	queue = []
	# inititla c would be 0
	# starting pos is 0,0 
	queue.append([0,0,0])
	visited.add((0,0))
	#at each step take one direction from dx and increement the counterho 
	while len(queue)>0:
		lx,ly,c = queue.pop(0) 
		#if raeched the last position return the c value which has all the step counted
		
		if lx==n-1 and ly==n-1:
			return c
		for z in range(8):
			nl = dx[z]+lx
			nr = dy[z]+ly
			if 0<=nl<n and 0<=nr<n and  (nl,nr) not in visited:
				queue.append([nl,nr,c+1])
				visited.add((nl,nr))
			
		

	return -1
	
n = int(input())
d = []
final = []
for i in range(1,n):
	ans = []
	for j in range(1,n):
		visited = set()
		
		x = findMove(i,j,visited,n)
		ans.append(x)
	final.append(ans)

for i in range(len(final)):
	for j in range(len(final[i])):
		print(final[i][j],end=' ')
	print()
