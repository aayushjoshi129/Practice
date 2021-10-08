a=[]
n=int(input("Enter N : "))
for i in range(n):
    num=int(input(f"Enter {i+1} Number : "))
    a.append(num)
val=int(input("Enter Number for Which You Want To Count Ocurence in The List :"))
count=0
for i in range(n):
    if val==a[i]:
        count=count+1
print(f"{val} Occured {count} Times In The List")