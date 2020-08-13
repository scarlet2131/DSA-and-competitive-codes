# def solution(s):
# 	c = 0
# 	for i in range(len(s)-1):
# 		for j in range(i+1,len(s)):
# 			if s[i]=='>' and s[j]=='<':
# 				c += 1
# 	return c*2


def solution(s):
	c = 0
	for i in range(len(s)):
		if s[i]=='<':
			c+=1
	ans = 0
	for i in range(len(s)):
		if s[i]=='<':
			c -=1
		elif s[i]=='-':
			continue
		else:
			ans+=c
	return ans*2

s = input()
ans = solution(s)
print(ans)



