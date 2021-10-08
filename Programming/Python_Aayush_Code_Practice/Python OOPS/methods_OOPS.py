class phone:
  def set_color(self,color):
    self.color=color
  def set_cost(self,cost):
    self.cost=cost
  def show_color(self):
    return self.color
  def show_cost(self):
    return self.cost
  def make_call(self):
    print("Calling...")
  def play_games(self):
    print("Playing Games")
p2=phone()
p2.set_color("Purple")
p2.set_cost(12000)
p2.show_color()
p2.show_cost()
p2.make_call()
p2.play_games()