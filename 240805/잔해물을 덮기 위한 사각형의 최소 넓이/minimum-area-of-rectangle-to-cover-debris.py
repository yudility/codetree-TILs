fx1, fy1, fx2, fy2 = map(lambda x:x+1000, tuple(map(int,input().split())))
sx1, sy1, sx2, sy2 = map(lambda x:x+1000, tuple(map(int,input().split())))
a = [[0]*2000 for _ in range(2001)]
#첫번쨰 사각형
for i in range(fx1,fx2):
    for j in range(fy1,fy2):
        a[i][j] = 1
#두번째사각형
for i in range(sx1,sx2):
    for j in range(sy1,sy2):
        a[i][j] = 0

min_x, min_y, max_x, max_y = 2001,2001,0,0
for i in range(fx1,fx2+1):
    for j in range(fy1,fy2+1):
        if a[i][j] == 1:
            min_x = min(min_x,i)
            min_y = min(min_y,j)
            max_x = max(max_x,i)
            max_y = max(max_y,j)

print((max_x-min_x+1)*(max_y-min_y+1) if (min_x,min_y,max_x,max_y) != (2001,2001,0,0) else 0)