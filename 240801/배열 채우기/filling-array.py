arr = list(map(int, input().split()))

n = 0
for i in arr:
    if i == 0:
        break
    n += 1

for a in arr[n-1::-1]:
    print(a, end=' ')