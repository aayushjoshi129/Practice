n=int(input("Enter N :"))
i=1
while i<=n:
    b=1
    while b<=n-i:
        print(" ",end="")
        b=b+1
    j=1
    while j<=i:
        print(i,end="")
        j=j+1
    print()
    i=i+1