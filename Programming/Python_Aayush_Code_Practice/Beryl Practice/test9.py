a=[2,5,9,43,34,45,7]
flag=0
for i in range(6):
    for j in range(1,6):
        if a[i]+a[j]==48:
            firstnum=a[i]
            secondnum=a[j]
            flag=1
if flag==1:
    print(f"The Two Numbers Whose Sum is 45 --> {firstnum} and {secondnum}")
else:
    print(f"No Such Numbers Exist")