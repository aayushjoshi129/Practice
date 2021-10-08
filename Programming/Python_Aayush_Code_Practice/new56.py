a=[]
n=int(input("Enter How Many Elements in lists : "))
for i in range (n):
    x=int(input(f"Enter {i+1} Element : "))
    a.append(x)
y=int(input("Enter Element tp Find Frequency : "))
print(f"{y} occurs {a.count(y)} times")
print(f"Original List {a}")
a.reverse()
print(f"Reversed List {a}")