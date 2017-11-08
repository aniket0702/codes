t = input()
while t:
    t-=1
    x,y = map(int,raw_input().split())
    s = 0.0
    c = y

    # s+=c*2
    # c = y*(y-1)*(x-1)
    if(y == 1):
        print "2"
    else:
        for i in range(1,x):
            s += (2*i)*c
            c *= (y-1)*(x-i)/(i)
            # print s,c
        s += 2*x*y*pow(y-1,x-1)
        # print s
        print s/pow(y,x)
