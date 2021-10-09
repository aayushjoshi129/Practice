#Sorting Numbers In a List
a=[]
b=[]
n=int(input("Enter No. Of Elements in List to Enter : "))
for i in range(n):
    num=int(input(f"Enter {i+1} Value : "))
    a.append(num)
while a:
    min=a[0]
    for i in a:
        if min>i:
            min=i
    b.append(min)
    a.remove(min)
# print(a)
print(b)
print(b[1])