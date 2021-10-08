n=int(input("Enter N :"))
ncopy=n
fact=1
while(ncopy>0):
    fact=fact*ncopy
    ncopy=ncopy-1
print(f"Factorial of {n} is ",fact)
