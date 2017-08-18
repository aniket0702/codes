t = input()
while t:
	x = list(map(str,raw_input().split()))
	if len(x)>1:
		for i in range(len(x)-1):
			print x[i][0].upper()+".",
	print x[len(x)-1][0].upper()+x[len(x)-1][1:].lower()
	t-=1
