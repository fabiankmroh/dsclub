x, y, z = [x for x in input("").split()] 
x = int(x)
y = int(y)

if z == "+": 
    print(x+y)
elif z == "-":
    print(x-y)
elif z == "*":
    print(x*y)
elif z == "/":
    print(x/y)