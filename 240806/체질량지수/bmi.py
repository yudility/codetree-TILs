a = input() 
b =a.split(" ") 
h=int(b[0]) 
w=int(b[1])

c=(10000*w)//(h*h) 
print(int(c)) 

if c >=25: 
    print("Obesity") #