n = input()
while n:
    n-=1
    s1 = raw_input()
    s2 = raw_input()
    s2 = s2+ s2
    c = 0
    x = len(s1)
    for i in range(x):
        if s1 == s2[i:i+x]:
            c+=1
    print c
