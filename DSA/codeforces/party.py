n = int(input())
a = []
for i in range(n):
	x = int(input())
	a.append(x)
queue = []
for i in range(n):
	if a[i]==-1:
		queue.append(i+1)
level=0
while len(queue)>0:
	size = len(queue)
	level+=1
	for i in range(size):
		x = queue.pop(0)
		for j in range(n):
			if a[j]==x:
				queue.append(j+1)
print(level)





