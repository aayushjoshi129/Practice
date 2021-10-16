n=int(input("Enter N :"))
i=2
sum_even=0
while (i<=n):
    if i%2==0:
        sum_even=sum_even+i
    i=i+1
print(sum_even)