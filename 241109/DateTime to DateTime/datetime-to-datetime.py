a, b, c = map(int,input().split())


result = (a - 11)*24*60 + (b - 11)*60 + (c - 11)

if(result < 0):
    print(-1)
else:
    print(result)