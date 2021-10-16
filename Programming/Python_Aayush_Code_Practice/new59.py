#write a program to reverse a number
n=2345671
rev=0
# ncopy=n
while(n>0):
    rev=rev*10 + n%10
    n=n//100      #234        rev=4*10
print(rev)