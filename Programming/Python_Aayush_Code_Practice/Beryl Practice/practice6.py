# Program to Print Stars
''' 
                    for n=5 input
    *****           --> 0 Blank Space 5 Star
    ****            --> 0 Blank Space 4 Star
    ***             --> 0 Blank Space 3 Star
    **              --> 0 Blank Space 2 Star
    *               --> 0 Blank Space 1 Star

 '''
n=int(input("Enter N : "))
i=1
while i<=n:
    j=0
    while j<=n-i:
        print("*",end='')
        j=j+1
    print()
    i=i+1