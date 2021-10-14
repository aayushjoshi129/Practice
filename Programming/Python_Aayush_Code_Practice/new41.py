n=int(input("Enter N :"))
i=1
while n>0:
    b=1
    while b<i:              #Print Blank Spaces
        print(" ",end="")
        b=b+1
    j=1
    while j<=n*2 -1:        #Print i
        print(i,end="")
        j=j+1
    print()
    n=n-1
    i=i+1
    