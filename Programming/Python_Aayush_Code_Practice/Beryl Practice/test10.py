a=[]
n=int(input("Enter No. of Elements : "))
for i in range(n):
    val=int(input(f"Enter {i+1} Element : "))
    a.append(val)
print(f"The Array is {a}")
num=int(input("Enter Length Upto Which You Want To Find Sum : "))
sum=0
for i in range(0,num):
    sum=sum+a[i]
print(f"The Sum Upto {num} Numbers is {sum}")