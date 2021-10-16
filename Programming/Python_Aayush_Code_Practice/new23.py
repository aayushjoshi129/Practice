n=int(input("Enter N :"))
i=1
count=0
while i<=n:
    if n%i==0:
        count=count+1
    i=i+1
if count==2:
    print("Number is Prime")
else:
    print("Number is Not a Prime Number")