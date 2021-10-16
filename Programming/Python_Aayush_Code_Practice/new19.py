n=int(input("Enter N :"))
copynum=n
sum_arm=0
count=0
while copynum>0:
    copynum=copynum//10
    count=count+1
copynum=n
while copynum>0:
    num=copynum%10
    sum_arm=sum_arm+num**count
    copynum=copynum//10
print("Number of Digits is ",count)
print(sum_arm,"is the Sum")
if n==sum_arm:
    print(f"{n} is Armstrong Number")
else :
    print(f"{n} is Not a Armstrong Number") 