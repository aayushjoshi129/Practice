a = int(input("Enter value of a :"))
b = int(input("Enter value of b :"))
c = int(input("Enter value of c :"))
if a>b and a<c or a<b and a>c:
    print("A is Middle Element")
elif b>a and b<c or b>c and b<a:
    print("B is Middle Element")
else :
    print("C is Middle Element")