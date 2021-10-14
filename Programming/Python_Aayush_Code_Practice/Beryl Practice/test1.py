#prime no bw 1-100
n=int(input("Enter N : "))
ncopy=n
i=1
count=0
while(i<=ncopy):
    if (ncopy%i==0):
        count=count+1
        i=i+1
    i=i+1
if count==2:
    print("prime")
else:
    print("non Prime")
