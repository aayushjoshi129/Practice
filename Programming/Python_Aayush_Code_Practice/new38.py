n=int(input("Enter N :"))
i=1
k=1
while i<=n:
    b=1
    while b<=n-i:               #Print Spaces
        print(" ",end="")
        b=b+1
    j=1
    while j<=k:                 #Print Stars
        print(i,end="")
        j=j+1
    k=k+2    
    print()
    i=i+1