tc = int(raw_input())
while (tc>0):
	tc = tc - 1
	n = int(raw_input())
	b, g = sorted(map(int, raw_input().split()))
	if g-1>b:
		print "Little Jhool wins!"
	else:
		print "The teacher wins!"
