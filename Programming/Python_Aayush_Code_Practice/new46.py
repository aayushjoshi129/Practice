x=int(input("Enter x:"))
y=int(input("Enter y:"))
# z=int(input("Enter z:"))
def add(a,b,c=5):
    d=a+b+c
    return d
sum = add(x,y)
print(sum)
