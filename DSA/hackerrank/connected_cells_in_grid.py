def bfs(a,n,m,l,r):
	dx= [0,-1,-1,-1,0,1,1,1]
	dy =[-1,-1,0,1,1,1,0,-1]

	queue = []
	c,lx,ly = 0,0,0
	queue.append([l,r])
	visited.add((l,r))
	while len(queue)>0:
		lx,ly= queue.pop(0)
		c+=1
		for i in range(8):
			nl= dx[i]+lx
			nr = dy[i]+ly
			if 0<=nl<n and 0<=nr<m and  (nl,nr) not in visited and a[nl][nr]==1:
				queue.append([nl,nr])
				visited.add((nl,nr))
	
	return c
n = int(input())
m = int(input())
a = []
for i in range(n):
	temp = list(map(int,input().split()))
	a.append(temp)
# print(a)
visited = set()
ma=-1
# print(n,m)
for i in range(n):
	for j in range(m):
		# print(a[i][j]+1)
		if a[i][j]==1 and (i,j) not in visited:
			# print("34")
			x=bfs(a,n,m,i,j)
			# print(i,j,x)
			if x>ma:
				ma=x
print(ma)

# print(a)
# bfs(a,n,m)