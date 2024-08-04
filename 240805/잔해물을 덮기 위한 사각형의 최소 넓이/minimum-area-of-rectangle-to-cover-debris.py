square=[
    [] for i in range (2)
]

for _ in range (2):
    x1,y1,x2,y2=map(int,input().split())
    for i in range (y1,y2):
        for j in range (x1,x2):
            square[_].append((j,i))

for i in square[1]:
    for j in square[0]:
        if j==i:
            square[0].remove(j)

if square[0]==[]:
    print(0)
else:
    ma=max(square[0])
    mi=min(square[0])
    g=ma[0]-mi[0]+1
    s=ma[1]-mi[1]+1
    print(g*s)