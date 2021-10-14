class Employee:
    salary=10000
    inc=1.5
    @property
    def salInc(self):
        return self.salary*self.inc

    @salInc.setter
    def salInc(self,sai):
        self.inc=sai/self.salary

e=Employee()
print(e.salInc)
print(e.inc)
e.salInc=20000
print(e.salInc)
print(e.inc)
