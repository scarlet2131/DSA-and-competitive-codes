


# def search(k,d):
# 	for i in d:
# 		if i==k:
# 			return True
# 	return False
# def solution(l):
# 	d = {}
# 	for i in range(len(l)-1):
# 		for j in range(i+1,len(l)):
# 			if l[j]%l[i]==0:
# 				if l[i] in d:
# 					if [l[j],j] not in d[l[i]]:
# 						d[l[i]].append([l[j],j])
# 				else:	
# 					d[l[i]] = [[l[i],i],[l[j],j]]
# 	print(d)
# 	ans = []
# 	for i in d:
# 		x = d[i]
# 		for j in range(len(x)):
# 			if search(x[j][0],d):
# 				cur = d[x[j][0]]
# 				for z in range(len(cur)):
# 					indi,indj,indk = d[i][0][1],x[j][1], cur[z][1]
					
# 					if indi<indj<indk:
# 						print(indi,indj,indk)
# 						ans.append( [i,x[j][0],cur[z][0]] ) 
					
	
# 	print(ans)


		

# l = list(map(int,input().split()))
# solution(l)