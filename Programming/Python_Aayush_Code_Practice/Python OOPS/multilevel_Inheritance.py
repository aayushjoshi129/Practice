class Parent(): 
    def assign_name(self,name): 
        self.name = name
        
    def show_name(self): 
        print(self.name)

class Child(Parent): 
    def assign_age(self,age): 
        self.age = age
        
    def show_age(self): 
        print(self.age)

class GrandChild(Child): 
    def assign_gender(self,gender): 
        self.gender = gender
        
    def show_gender(self): 
        print(self.gender)

g1 = GrandChild()
g1.assign_name("Sam")
g1.assign_age(25)
g1.assign_gender("Male")
g1.show_name()
g1.show_age()
g1.show_gender()