n=int(input("Enter N :"))
i=1
sum_natural=0
count=0
while count<n:
    if i%2==0:
        sum_natural=sum_natural+i
        count=count+1
    i=i+1
print(sum_natural)