a, b, c = map(int,input().split())


if a == 11 and b< 11 and c<11:
    print(-1)

else:
    result = (a - 11)*24*60 + (b - 11)*60 + (c - 11)
    print(result)