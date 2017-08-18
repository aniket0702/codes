t = input()
for i in range(t):
    s = raw_input()
    su=0
    for j in s:
        su += int(j)
    f = su%9
    z = 9-f
    print min(f,z)
