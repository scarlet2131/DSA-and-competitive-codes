n,d =[int(n) for n in input().split()]
s = input()
dp = [10**10 for i in range(n)]
dp[0]=0
for i in range(1,n):
	if s[i]=="1":
		for j in range(max(i-d,0),i):
			if s[j]=="1":
				dp[i] = min(dp[j]+1,dp[i])
if dp[n-1]==10**10:
	dp[n-1]=-1
print(dp[n-1])

