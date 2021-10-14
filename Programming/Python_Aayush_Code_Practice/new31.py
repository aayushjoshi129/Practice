n=int(input("Enter N :"))
ncopy=n
i=1
while(i<=n):
    j=1
    print(" "*(ncopy-1),end=" ")
    ncopy=ncopy-1
    while j<=i:
        print("*",end=" ")
        j=j+1
    print()
    i=i+1
    