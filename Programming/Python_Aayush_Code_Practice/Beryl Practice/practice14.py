#Find Second Maximum Number
a=[]
n=int(input("Enter No. Of Elements in List to Enter : "))
for i in range(n):
    num=int(input(f"Enter {i+1} Value : "))
    a.append(num)
for i in range (n):
    for j in range (i+1,n):
        if a[i]<a[j]:
            temp=a[i]
            a[i]=a[j]
            a[j]=temp
if a[0]==a[1]:
    secmax=a[2]
else:
    secmax=a[1]
print("Second Maximum Element in List is ",secmax)