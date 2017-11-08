s = raw_input()
a = 0
b = 0
i = 0
while(i<len(s)):
    if s[i] == '.':
        j = i
        # print "fsajfk"
        if s[i-1] == 'A' or s[i-1] == 'B':

            while s[j] == '.' and j<len(s):
                j+=1
            if s[j] == s[i-1]:
                # print "nvfisab"
                if(s[j] == 'A'):
                    a+=j-i+1
                else:
                    b+=j-i+1
        i = j+1
    elif s[i] == 'A':
        a+=1
        i+=1
    elif s[j] == 'B':
        b+=1
        i+=1
print a,b
