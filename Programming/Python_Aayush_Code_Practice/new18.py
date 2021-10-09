n=int(input("Enter N :"))
sum_cube_num=0
while n>0:
    num=n%10
    sum_cube_num=sum_cube_num+num**3
    n=n//10
print(sum_cube_num)