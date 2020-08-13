t = int(input())
for i in range(t):
	b,c = [int(b) for b in input().split()] 
	bc,wc,z = [int(bc) for bc in input().split()] 
	# b,c = input().split()
	# bc,wc,z = input().split()
	if bc+z<wc:
		ans = bc*b+(bc+z)*c
	elif wc+z<bc:
		ans = (wc+z)*b+wc*c
	else:
		ans = bc*b + wc*c
	print(ans)