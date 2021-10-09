#Program To Reverse a List
a=[]
n=int(input("Enter N : "))
for i in range(n):
    val=int(input(f"enter {i+1} Number : "))
    a.append(val)
print("List Before Reversing is ",a)
i=0
j=n-1
while i<j:
    temp=a[i]
    a[i]=a[j]
    a[j]=temp
    i=i+1
    j=j-1
print("List After Reversing is ",a)