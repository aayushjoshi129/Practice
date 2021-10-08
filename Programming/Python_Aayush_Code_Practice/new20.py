n=int(input("Enter N :"))
pro_num=1
while n>0:
    num=n%10
    pro_num=pro_num*num
    n=n//10
print(pro_num)