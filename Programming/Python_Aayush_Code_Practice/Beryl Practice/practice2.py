#Program To Print Stars                 
''' 
                    for n=5 input
     *               --> 4 Blank Space 1 Star
    ***              --> 3 Blank Space 3 Star
   *****             --> 2 Blank Space 5 Star
  *******            --> 1 Blank Space 7 Star
 *********           --> 0 Blank Space 9 Star

 '''
n=int(input("Enter N : "))
i=1
k=1
while i<=n:    # for i in range (0,n):
     j=1
     while j<=n-i:  #  for j in range (0,n-i):
          print(" ",end="")
          j=j+1
     b=1
     while b<=k: #  for b in range (0,k):
          print("*",end="")
          b=b+1
     k=k+2
     print()
     i=i+1