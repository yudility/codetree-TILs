n = int(input())

def Cnt(a):
    if a == 1:
        return 0
    
    if a%2==0:
        return 1+Cnt(a//2)
    else:
        return 1+Cnt(a//3)
    

print(Cnt(n))