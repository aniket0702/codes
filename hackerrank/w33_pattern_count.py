n=input()
for x in range(n):
	s= raw_input()
	l = len(s)
	cnt = 0
	for i in range(l-1):
		if s[i] == '1' and s[i+1] == '0':
			i +=1
			while s[i] == '0' and i < l-1:
				i+=1
			if s[i] is "1":
				cnt+=1
				i-=2
	print cnt