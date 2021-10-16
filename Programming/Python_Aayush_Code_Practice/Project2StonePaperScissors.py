import random
def game(comp,you):
        if comp==you :
            return None
        elif comp=='st' :
            if you=='p':
                return True
            if you=='sc':
                return False
        elif comp=='p' :
            if you=='sc':
                return True
            if you=='st':
                return False
        elif comp=='sc' :
            if you=='st':
                return True
            if you=='p':
                return False
randNo=random.randint(1,3)
print("Computer's Turn : Stone(st) or Paper(p) or Scissor(sc) ")
if randNo==1 :
    comp="st"
elif random==2 :
    comp="p"
elif randNo==3 :
    comp="sc"
you=input("Your's Turn Choose : Stone(st) or Paper(p) or Scissor(sc) ? ")
a=game(comp,you)
print(f"Comp chose : {comp}")
print(f"You Chose : {you}")
if a==None :
    print("The Match Has Been Drawn !!!")
elif a==True :
    print("Wohoo ! You Have Won The Game....")
else :
        print("You Lose....!")
