# Find Second Minimum in a List
a=[]
n=int(input("Enter N : "))
for i in range (n):
    val=int(input(f"Enter {i+1} Number : "))
    a.append(val)
print(f'List Before Sorting is {a}')
for i in range (n):
    for j in range (i+1,n):
        if a[i]>a[j]:
            temp=a[i]
            a[i]=a[j]
            a[j]=temp
print(f'List After Sorting is {a}')
if a[0]==a[1]:
    secondmin=a[2]
else:
    secondmin=a[1]
print('Second Min is ',secondmin)