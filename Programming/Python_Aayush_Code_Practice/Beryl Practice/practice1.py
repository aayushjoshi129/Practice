#Program To Reverse a Number
n=int(input("Enter Number to Reverse : "))
rev=0
while n>0:
    rev=rev*10 + n%10
    n=n//10
print(f"Reversed Number is : {rev}")