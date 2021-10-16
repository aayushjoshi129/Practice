''' 
                        for n=5 input
     *                  --> 4 Blank Space 1 Star
    **                  --> 3 Blank Space 2 Star
   ***                  --> 2 Blank Space 3 Star
  ****                  --> 1 Blank Space 4 Star
 *****                  --> 0 Blank Space 5 Star

 '''

n=int(input("Enter N : "))
i=1
while i<=n:
    j=1
    while j<=n-i:
        print(" ",end='')
        j=j+1
    k=1
    while k<=i:
        print("*",end='')
        k=k+1
    print()
    i=i+1

