n=int(input("Enter N : "))
a=[]
for i in range (n):
    num=int(input(f"Enter {i+1} number : "))
    a.append(num)
max=a[0]
max2=a[0]
for i in range (1,n):
    if a[i]>max:
        max2=max
        max=a[i]
    elif a[i]>max2:
        max2=a[i]
print(a)
print(max)
print(max2)