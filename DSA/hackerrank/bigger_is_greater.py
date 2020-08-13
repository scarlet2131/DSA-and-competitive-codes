def bin_search(s,ind):
	temp = ""
	ans = ind+1
	# print(ans)
	for i in range(len(s)-1,ind,-1):
		if s[i]>s[ind]:
			ans = i
			break
	# print(ans)
	# l = 0
	# r = len(res)
	# while l<=r:
	# 	mid = (l+r)//2
	# 	if s[mid]>s[ind]:
	# 		ans = mid
	# 		r = mid-1
	# 	else:
	# 		l = mid+1
	# return ans
	return ans
t = int(input())
for i in range(t):
	s = input()
	ans = list()
	ind = 0
	final = ""
	f = 0
	for j in range(len(s)-1,0,-1):
		if s[j]>s[j-1]:
			ind = j
			f=1
			break
	# print(ind, end=' ind ')
	if f==1:
		swap_ind = bin_search(s,ind-1)
		# print(swap_ind,end='swap_ind ')
		for j in range(len(s)):
			ans +=s[j]

		
		temp = ans[ind-1]
		ans[ind-1]=ans[swap_ind]
		ans[swap_ind]=temp
		# print(ans)
		to_sort =""
		for j in range(ind,len(ans)):
			to_sort +=ans[j]
		sorted_left =''.join(sorted(to_sort))
		
		for j in range(ind):
			final += ans[j]
		for j in range(len(sorted_left)):
			final +=sorted_left[j]
	else:
		final = "no answer"
	print(final)


