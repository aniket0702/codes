t =input()
chs = {'l', 'i', 't', 'e', 'j','h','o'}
while t:
	lst =[list()] * 10
	n,k = map(int,raw_input().split())
	l = list(map(str,raw_input().split()))
	s = set()
	for i in l:
		for j in i:
			s.add(j)
		c= len(s.intersection(chs))
		lst[c].append(i)
	for i in lst:
		for j in i:
			if c <= k:
				print j, 
				c+=1
	t-=1
