l = input()
for j in range(l):
    s = list(raw_input().split())
    x = int(s[0])
    print str(j+1) + " " + s[1][0:x-1]+s[1][x:]
