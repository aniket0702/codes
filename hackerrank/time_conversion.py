s = raw_input()
if s[8] is "P":
	x= (int(s[0:2])+12)%24
	print str(x) + s[2:8]
else:
	x= int(s[0:2])
	if x >= 12:
		print "00" + s[2:8]
	else:
		print s[0:8]
