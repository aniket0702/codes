t = input()
while t:
    t-=1
    n,num = map(int,raw_input().split())
    c = pow(2,n)
    pos = 0
    for i in range(n):
        if num%2 == 0:
            num /= 2
        else:
            pos = pos + pow(2,n-i-1)
            num = num//2
    print pos
