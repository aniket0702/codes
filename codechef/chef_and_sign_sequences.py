t = input()

while t:
	s = raw_input()
	n = 1000000
	m = n
	mn = n
	for i in s:
		if i == "<":
			n+=1
		elif i == ">":
			n-=1
		# else:
		# 	n = n
		if n >m:
			m=n
		if n<mn:
			mn = n
	# m = max(m,n)
	# mn = min(mn,n)
	print m-mn+1
	t-=1
#wrong solution
