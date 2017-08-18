t = input()
s = "abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ"
while t:
    l = list(map(str,raw_input().split()))
    c = len(l)
    sm= 0
    for i in l:
        sz = len(i)
        
        for j in range(sz):
            ind = s.index(i[j])
            sm += (ind+j)
    print sm*c
    t-=1
