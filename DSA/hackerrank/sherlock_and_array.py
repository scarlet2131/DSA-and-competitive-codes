t = int(input())
for i in range(t):
	n = int(input())
	a = list(map(int,input().split()))
	forward_pref = [0 for i in range(n)]
	backward_pref = [0 for i in range(n)]
	for i in range(len(a)):
		forward_pref[i] = forward_pref[i-1]+a[i]
	# print(forward_pref)
	backward_pref[n-1]=a[n-1]
	for i in range(len(a)-1,0,-1):
		backward_pref[i-1]=backward_pref[i]+a[i-1]
	# print(backward_pref)
	f = 0
	for i in range(n):
		if forward_pref[i]==backward_pref[i]:
			f = 1
	if f==1:
		print("YES")
	else:
		print("NO")