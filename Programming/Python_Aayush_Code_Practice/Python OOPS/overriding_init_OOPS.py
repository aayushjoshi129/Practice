class Vehicle:
  def __init__(self,mileage,cost):
    self.mileage=mileage
    self.cost=cost
  def show_details(self):
    print("The Mileage Of The Vehicle is ",self.mileage)
    print("The Cost Of The Vehicle is ",self.cost)
class Car(Vehicle):  
  def __init__(self,mileage,cost,tyres,hp):  
    super().__init__(mileage,cost)
    self.tyres=tyres
    self.hp=hp       
  def details(self):
    print("Tyres in this car is ",self.tyres)
    print("Horse Power of This Car is ",self.hp)
    print("This is a Car")
v2=Vehicle(200,40000)
c2=Car(80,90000,6,150)
v2.show_details()
c2.details()
c2.show_details()