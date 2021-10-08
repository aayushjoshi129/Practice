n=int(input("Enter N : "))
fact=1
def factorial(n):
    if n==1:
        return 1
    elif n==0:
        print("Factorial of 0 is 1")
    else:
        return n*factorial(n-1)
fact=factorial(n)
print(f"Factorial of {n} is {fact}")