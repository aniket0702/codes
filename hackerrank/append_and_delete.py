a = raw_input()
b = raw_input()
n = input()
x = len(a)
y = len(b)
i = min(x,y)
r = 0
f = 1

for j in range(i):
	if(a[j] != b[j]):
		# print j
		# print x
		# print y
		r = x-j + y-j
		f = 0
		break
#print f
if f is 1:
	if i < x:
		r = x-y
	else:
		r = (y-x)
#print r
if r <= n:
	print "Yes"
else:
	print "No"
































































