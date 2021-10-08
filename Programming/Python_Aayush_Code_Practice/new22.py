n=int(input("Enter N :"))
ncopy=n
reverse=0
while ncopy>0:
    num=ncopy%10
    reverse=reverse*10 + num
    ncopy=ncopy//10
if n==reverse:
    print("Number is Palindrome")
else :
    print("Number is Not a Palindrome")