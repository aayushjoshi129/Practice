n=int(input("Enter N : "))
i=1
while i<=n:
    j=1
    while j<i:
        print(" ",end='')
        j=j+1
    b=1
    while b<=n-i:
        print("*",end='')
        b=b+1
    print()
    i=i+1