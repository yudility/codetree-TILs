n, m, k = tuple(map(int, input().split()))

grid = [
    list(map(int, input().split()))
    for _ in range(n)
]

bar = [0] * n

for i in range(k-1, k+m-1, 1):
    bar[i] = 1

place = 1
for row in range(1, n+1):
    cnt = 0
    for i in range(n):
        if bar[i] == 1 and grid[row][i] == 0:
            cnt += 1
    
    if cnt >= m:
        place = place + 1
    else:
        break

for i in range(n):
    grid[place-1][i] = max(bar[i], grid[place-1][i])

for i in range(n):
    print(*grid[i][:])