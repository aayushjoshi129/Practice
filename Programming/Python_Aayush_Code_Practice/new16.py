n=int(input("Enter N :"))
sum_num=0
while n>0:
    num=n%10
    sum_num=sum_num+num
    n=n//10
print(sum_num)