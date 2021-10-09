a=int(input("Enter 1st Marks Out of 100 :"))
b=int(input("Enter 2nd Marks Out of 100 :"))
c=int(input("Enter 3rd Marks Out of 100 :"))
d=int(input("Enter 4th Marks Out of 100 :"))
e=int(input("Enter 5th Marks Out of 100 :"))
total = a+b+c+d+e
percentage = (total/500)*100
print("Your Total Marks is :",total)
print("Your Percentage is ",percentage,"%")
if percentage>=80:
    print("And Your Grade is A")
elif percentage>=60 :
    print("And Your Grade is B")
elif percentage>=40 :
    print("And Your Grade is C")
elif percentage<40:
    print("And Your Grade is D")