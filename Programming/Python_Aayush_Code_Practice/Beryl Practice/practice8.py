#Find Maximum Number In a List
a=[]
n=int(input("Enter No. Of Elements in List to Enter : "))
for i in range(n):
    num=int(input(f"Enter {i+1} Value : "))
    a.append(num)
max=a[0]
for i in a:
    if max<i:
        max=i
print("Maximum No. In List is ",max)