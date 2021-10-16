class Vehicle:
  def __init__(self,mileage,cost):
    self.mileage=mileage
    self.cost=cost
  def show_details(self):
    print("The Mileage Of The Vehicle is ",self.mileage)
    print("The Cost Of The Vehicle is ",self.cost)
class Car(Vehicle):           #Car is Child Class Which is Inheriting its methods from Vehicle Class which is known as parent class or super class
  def details(self):
    print("This is a Car")
v1=Vehicle(40,80000)
c1=Car(100,90000)
v1.show_details()
c1.details()
c1.show_details()