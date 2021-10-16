n=int(input("Enter N :"))
sum_sq_num=0
while n>0:
    num=n%10
    sum_sq_num=sum_sq_num+num*num
    n=n//10
print(sum_sq_num)