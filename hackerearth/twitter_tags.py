n  = input()
l = dict()
for _ in range(n):
	s = raw_input().split()
	for i in  s:
		if i[0] == '#':
			if i in l:
				l[i] = l[i]+1
			else:
				l[i] = 1
# l = sorted(l,key = l.get,reverse = True)[0:5]
l = [k for k, v in sorted(l.iteritems(), key=lambda(k, v): (-v, k))]

for i in l[:5]:
	print i