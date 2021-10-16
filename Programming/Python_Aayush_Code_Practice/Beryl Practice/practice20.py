n=int(input("Enter N : "))
i=1
while i<=n:
    k=0
    while k<2:
        j=1
        while j<=n/2-i:
            print(" ",end='')
            j=j+1
        b=1
        while b<=2*i:
            print("*",end='')
            b=b+1
        print()
        k=k+1
    i=i+1