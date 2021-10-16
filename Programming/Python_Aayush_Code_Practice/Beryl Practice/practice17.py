#Program To Search a Number in the List
a=[]
n=int(input("Enter N : "))
for i in range(n):
    num=int(input(f"Enter {i+1} Number : "))
    a.append(num)
search=int(input("Enter Number you Want To Search : "))
flag=0
for i in range (n):
    if search==a[i]:
        flag=1
        index=i+1
        break
if flag==1:
    print(f"{search} is Found at {index} Position")
else:
    print(f"{search} is Not Present in The List")