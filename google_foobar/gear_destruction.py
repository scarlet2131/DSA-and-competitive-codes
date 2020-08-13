from fractions import Fraction
def solution(pegs):
	s = -1
	flag = 0
	m = pegs[1]-pegs[0];
	for i in range(1,len(pegs)):
		if pegs[i]-pegs[i-1]!=m:
			flag=1
			break

	if not flag and len(pegs)%2 and m!=1:
		return [4,3]

	for i in range(2,len(pegs)):
		m += s*(pegs[i]- pegs[i-1])
		s = -s
	# print(m)
	if len(pegs)%2==0:
		ans = (2*m)/3
	else:
		ans = 2*m
	# print(ans)
	final = []
	z = ans
	f=0

	for i in range(1,len(pegs)):
		z = pegs[i]-pegs[i-1]-z;
		if z<=0:
			f=1
			break

	if f==1:
		ans = [-1,-1]
	else:
		x,y = Fraction(ans).limit_denominator(10).numerator, Fraction(ans).limit_denominator(10).denominator
		ans = [x,y]
	return ans

   
gears = list( map(int,input().split()) )
ans = solution(gears)
print(ans)