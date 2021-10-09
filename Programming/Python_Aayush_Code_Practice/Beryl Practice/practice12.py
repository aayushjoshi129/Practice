#Find 2 Numbers In a List Whose Sum == 16
a=[]
b=[]
n=int(input("Enter No. Of Elements in List to Enter : "))
for i in range(n):
    num=int(input(f"Enter {i+1} Value : "))
    a.append(num)
flag=0
for i in range (n):
    for j in range (i+1,n):
        if a[i]+a[j]==16:
            ith=a[i]
            jth=a[j]
            flag=1
            break
if flag==1:            
    print(f"The 2 Numbers are {ith} and {jth}")

else:
    print("No Such Numbers Found Whose Sum==16 !!")