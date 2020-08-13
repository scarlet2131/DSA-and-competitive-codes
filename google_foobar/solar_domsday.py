import math
def solution(area):
	ans = []
	while area>0:
		s = int(math.sqrt(area))
		ans.append(s**2)
		area -= s**2
	return ans

s = int(input())
ans = solution(s)
print(ans)

