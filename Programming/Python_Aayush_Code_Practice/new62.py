# n=int(input("Enter N : "))
# i=1
# while i<=n:
#     j=1
#     while j<=n-i:
#         print(" ",end='')
#         j=j+1
#     b=1
#     while b<=2*i-1:
#         print("*",end='')
#         b=b+1
#     print()
#     i=i+1
n=int(input("Enter N : "))
i=1
k=n
while i<=n:
    j=1
    while j<i:
        print(" ",end='')
        j=j+1
    b=1
    while b<=2*k-1:
        print("*",end='')
        b=b+1
    print()
    k=k-1
    i=i+1