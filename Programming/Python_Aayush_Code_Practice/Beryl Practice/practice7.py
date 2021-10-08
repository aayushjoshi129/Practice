#Program To Print Stars                 
''' 
                    for n=5 input
 *****              --> 0 Blank Space 5 Star
  ****              --> 1 Blank Space 4 Star
   ***              --> 2 Blank Space 3 Star
    **              --> 3 Blank Space 2 Star
     *              --> 4 Blank Space 1 Star

 '''
n=int(input("Enter N : "))
i=0
while i<=n:
    j=0
    while j<i:
        print(" ",end='')
        j=j+1
    b=1
    while b<=n-i:
        print("*",end='')
        b=b+1
    print()
    i=i+1