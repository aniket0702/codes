s = raw_input()
i,m = map(int,raw_input().split())
# s[i-1] = s[i-1].swapcase()
# s[m-1] = s[m-1].swapcase()
print s[:i-1]+s[i-1].swapcase()+s[i:m-1]+s[m-1].swapcase()+s[m:]