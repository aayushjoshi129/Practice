class Calculator:
    def __init__(self,num):
       self.num=num
    def square(self):
        print(f"The Square of The {self.num} is {self.num**2}")
    def cube(self):
        print(f"The Cube of The {self.num} is {self.num**3}")
    def cubreoot(self):
        print(f"The CubeRoot of The {self.num} is {self.num**0.5}")

calc=Calculator(5)
calc.square()
calc.cube()
calc.cubreoot()