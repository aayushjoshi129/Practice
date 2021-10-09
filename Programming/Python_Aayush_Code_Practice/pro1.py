# class Programmer:
#     company = "Microsoft"
#     def getdetails(self):
#         pass
#     def disp(self):
#       print (f"The details of programmer is {pro1.name}\nHis salary is {pro1.salary}")
# pro1 = Programmer()
# pro1.name="aayush"
# pro1.salary=40000
# pro1.disp()
class Programmer:
    company="Microsoft"
    def __init__(self,name,salary,product):
        self.name = name
        self.salary=salary
        self.product=product
    def disp(self):
        print(f"The Details of The employee is {self.name} his Salary is {self.salary} his Product is {self.product} his Company is {self.company}")
aayush=Programmer("Aayush",40000,"Alexa")
rajat=Programmer("Rajat",50000,"Alexa2")
aayush.disp()
rajat.disp()