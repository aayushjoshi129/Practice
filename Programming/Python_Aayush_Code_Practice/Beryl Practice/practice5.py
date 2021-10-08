# Program to Print Stars
''' 
                    for n=5 input
 *********           --> 0 Blank Space 9 Star
  *******            --> 1 Blank Space 7 Star
   *****             --> 2 Blank Space 5 Star
    ***              --> 3 Blank Space 3 Star
     *               --> 4 Blank Space 1 Star

 '''

n=int(input("Enter N :"))
i=1
k=n
while i<=n:
    b=1
    while b<i:
        print(" ",end="")
        b=b+1
    j=1
    while j<=2*k-1:
        print("*",end='')
        j=j+1
    print()
    k=k-1
    i=i+1
    