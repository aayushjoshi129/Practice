l1=[5,10,15,20,5,10]
n=int(input("Enter N : "))
count=0
for i in range (6):
    if l1[i]==n:
        count=count+1
print(f"{n} occurs {count} times")