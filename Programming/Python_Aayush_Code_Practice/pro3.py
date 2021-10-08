class test:
    a=5
    def disp(self):
        print(f"The Value of a is {self.a}")
obj=test()
obj.a=0
print(obj.a)
print(test.a)
obj.disp()