class Animals:
   AnimalType="Living Being"
class Pets(Animals):
    Color="White"
class Dogs(Pets):
    @staticmethod
    def bark():
        print("bhow,bhow")
d=Dogs()
d.bark()