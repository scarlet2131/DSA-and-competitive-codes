n = int(input())
a = list(map(int,input().split()))
m = int(input())
b = list(map(int,input().split()))

# print(a)
# print(b)
countA = [0 for i in range(100001)]
countB = [0 for i in range(100001)]
for i in range(n):
	countA[a[i]]+=1
for i in range(m):
	countB[b[i]]+=1
for i in range(len(countA)):
	if countA[i]!=countB[i]:
		print(i,end=' ')

print()
