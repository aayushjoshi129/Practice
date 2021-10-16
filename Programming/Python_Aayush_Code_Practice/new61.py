n=4
i=1
k=1
while i<=n:
    j=0
    while (j<n-i):
        print(" ",end='')
        j=j+1
    b=1
    while b<=k:
        print("*",end='')
        b=b+1
    k=k+2
    print()
    i=i+1