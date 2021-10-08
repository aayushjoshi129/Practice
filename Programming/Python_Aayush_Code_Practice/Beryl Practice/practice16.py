#Count No. of Odd And Even Numbers in a List
a=[]
n=int(input("Enter N : "))
for i in range(n):
    num=int(input(f"Enter {i+1} Number : "))
    a.append(num)
counteve=0
countodd=0
for i in range (n):
    if a[i]%2==0:
        counteve=counteve+1
    else:
        countodd=countodd+1
print(f"There are {counteve} Even Numbers and {countodd} Odd Numbers in the List")