class Train:
    def __init__(self,name,fare,seats):
        self.name=name
        self.fare=fare
        self.seats=seats
    def book(self):
        if(self.seats>0):
            print(f"Your ticket has been booked! Your seat number is {self.seats}")
            self.seats = self.seats - 1
        else:
            print("Sorry this train is full! Kindly try in tatkal")
    def getStatus(self):
      print(f"The No. of seats Availabe is {self.seats}")
    def fareInfo(self):
      print(f"The Name Of The Train is {self.name} and Fare is Rs.{self.fare}")
    def cancel(self):
        self.seats=self.seats+1
        print("Your Ticket Has Been Cancelled")
InterCity=Train("Rajdhani Express : 12280",4500,140)
InterCity.getStatus()
InterCity.fareInfo()
InterCity.book()
InterCity.getStatus()
InterCity.cancel()
InterCity.getStatus()
