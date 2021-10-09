# x=eval(input("Enter value of x :"))
# y=eval(input("Enter value of y :"))
# z=eval(input("Enter value of z :"))
# n=eval(input("Enter value of n :"))
# lis =[]
# lis = [[x,y,z] for x in range (x+1) for y in range(y+1) for z in range (z+1) if x + y + z != n]
# print(lis)
if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    lis =[]
    lis = [[x,y,z] for x in range (x+1) for y in range(y+1) for z in range (z+1) if x + y + z != n]
    print(lis)