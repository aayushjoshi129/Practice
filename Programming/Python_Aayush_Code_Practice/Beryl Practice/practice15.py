#Find Sum Of All Elements In a List
a=[]
n=int(input("Enter No. Of Elements in List to Enter : "))
for i in range(n):
    num=int(input(f"Enter {i+1} Value : "))
    a.append(num)
sum=0
for i in a:
    sum=sum+i
print(sum)