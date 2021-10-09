#reverse a list
a=[]
n=int(input("enter N : "))
for i in range(n):
    num=int(input(f"Enter {i+1} value : "))
    a.append(num)
print(a)
i=0
j=n-1
while i<j:
    temp=a[i]
    a[i]=a[j]
    a[j]=temp
    i=i+1
    j=j-1
print(a)