n=input("Enter String : ")
n=n.lower()
print(n)
m=n[-1::-1]
if m==n:
    print("String is Palindrome")
else:
    print("String is not Palindrome")