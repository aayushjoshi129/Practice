#Find Minimum Number In a List
a=[]
n=int(input("Enter No. Of Elements in List to Enter : "))
for i in range(n):
    num=int(input(f"Enter {i+1} Value : "))
    a.append(num)
min=a[0]
for i in a:
    if min>i:
        min=i
print("Minimum Number in List is ",min)