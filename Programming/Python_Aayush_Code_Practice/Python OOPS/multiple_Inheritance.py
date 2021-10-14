class parent1:
  def assign_str_one(self,str1):
    self.str1=str1
  def show_str1(self):
    print(self.str1)
class parent2:
  def assign_str_two(self,str2):
    self.str2=str2
  def show_str2(self):
    print(self.str2)
class child(parent1,parent2):
  def assign_str_three(self,str3):
    self.str3=str3
  def show_str3(self):    
    print(self.str3)
c1=child()
c1.assign_str_one("I am String One Which is Parent 1...")
c1.assign_str_two("I am String Two Which Is Parent 2...")
c1.assign_str_three("I am String Three Which is a Child Class...")
c1.show_str1()
c1.show_str2()
c1.show_str3()