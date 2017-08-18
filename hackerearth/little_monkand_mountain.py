import bisect
l=list(map(int,raw_input().split()))
arr = []
d= []
for i in range(l[0]):
	x= list(map(int,raw_input().split()))
	arr.append(x)
	if i is 0:
		d.append(0)
	else:
		d.append(arr[i-1][1] - arr[i-1][0] + 1 + d[i-1])
for i in range(l[1]):
	q= input()
	index = bisect.bisect_left(d,q)
	index -= 1
	print arr[index][0] + q -d[index]-1