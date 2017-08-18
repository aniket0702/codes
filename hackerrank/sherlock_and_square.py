import math
def is_square(integer):
    root = math.sqrt(integer)
    if int(root + 0.5) ** 2 == integer: 
        return True
    else:
        return False

t = input()
while t:
	cnt = 0
	x,y = map(int,raw_input().split())
	for i in xrange(x,y+1):
		if is_square(i) is True:
			cnt+=1
	print cnt
	t-=1

#wrong solution 
#time limit exceed for large input files