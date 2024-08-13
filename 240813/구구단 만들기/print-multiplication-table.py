inp = list(map(int,input().split()))
a = int(inp[0])
b = int(inp[1])

for i in range(1,10):
    for j in range(b,a-1,-2):
        print(f"{j} * {i} = {j*i} ",end="")
        if(j!=a):
            print("/ ",end="")
    print()