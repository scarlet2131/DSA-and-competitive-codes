#the minimum difference will be only when array sorted now to gt minimum swap we will have to check with both asending
#as well as descending order
#the cycle will be formed between the index currently of any element in the array and the position of tht 
#in the sorted array
#cycle nodes will be indexes
#use dfs to get the cycle length


l = 0
def dfs(node,visited,adj):
	global l
	visited.add(node)
	l+=1
	for i in adj[node]:
		if i not in visited:
			dfs(i,visited,adj)

def main():
	from sys import stdin,stdout,setrecursionlimit
	setrecursionlimit(10**5+1)

	n = int(stdin.readline())
	a = list(map(int,stdin.readline().split()))
	#checking with ascending sorted array
	adj = {}
	b = []
	for i in range(n):
		b.append(a[i])
	b.sort()
	d = {}
	for i in range(n):
		d[b[i]] = i
	# print(d)	
	for i in range(n):
		j = d[a[i]]
		if i in adj:
			adj[i].append(j)
		else:
			adj[i] = [j]

		if j in adj:
			adj[j].append(i)
		else:
			adj[j] =  [i]

	# print(adj)
	visited = set()
	ans = 0
	global l
	for i in range(n):
		if i not in visited:
			l=0
			dfs(i,visited,adj)
			# print(l)
			ans += l-1

	# print(ans)
	#descending order
	adj2 = {}
	c = []
	for i in range(n):
		c.append(a[i])
	c = sorted(c,reverse=True)
	d = {}
	for i in range(n):
		d[c[i]] = i
	for i in range(n):
		x,y = d[a[i]],i
		if x in adj2:
			adj2[x].append(y)
		else:
			adj2[x] = [y]
		if y in adj2:
			adj2[y].append(x)
		else:
			adj2[y] = [x]
	visited = set()
	ans2 = 0
	for i in range(n):
		if i not in visited:
			l =0
			dfs(i,visited,adj2)
			ans2 +=l-1

	final = min(ans,ans2)
	print(final)



	

main()