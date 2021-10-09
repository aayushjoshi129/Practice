#Sorting Numbers In a List
a=[]
b=[]
n=int(input("Enter No. Of Elements in List to Enter : "))
for i in range(n):
    num=int(input(f"Enter {i+1} Value : "))
    a.append(num)
for i in range (n):
    for j in range(i+1,n):
        if a[i]>a[j]:
            temp=a[j]
            a[j]=a[i]
            a[i]=temp
print(a)