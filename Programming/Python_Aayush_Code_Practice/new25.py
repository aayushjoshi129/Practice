from typing import no_type_check


num=int(input("Enter N :"))
factorials=1

def fact(n) :
    if n==1:
        return n
    else:
        factorials=n*fact(n-1)
        return factorials
print(f"Factorial of {num} is ",fact(num))