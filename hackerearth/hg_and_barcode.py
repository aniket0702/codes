n =input()
while n:
    n-=1
    t = input()
    s = raw_input()
    cnt1 = 0
    cnt2 = 0
    for i in range(t):
        # print i
        if i%2 is 0 and s[i] is '0':
            # print cnt1
            cnt1+=1
        elif i%2 is 1 and s[i] is '1':
            cnt1+=1
    for i in range(t):
        if i%2 is 0 and s[i] is '1':
            cnt2+=1
        elif i%2 is 1 and s[i] is '0':
            cnt2+=1
    # print cnt1
    # print cnt2
    print min(cnt1,cnt2)
