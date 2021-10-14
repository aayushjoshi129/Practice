class employee:
  def __init__(self,name,age,salary,gender):        #Constructor
    self.name=name
    self.age=age
    self.salary=salary
    self.gender=gender
  def show_details(self):
    print(f"Name of Employee is {self.name}")
    print(f"Age of Employee is {self.age}")
    print(f"Salary of Employee is {self.salary}")
    print(f"Gender of Employee is {self.gender}")
e1=employee("Aayush",20,140000,"Male")
e1.show_details()