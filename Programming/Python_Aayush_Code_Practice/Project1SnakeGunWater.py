import random
def gamewin(comp,you) :
    if comp==you :
        return None
    elif comp=="g" :
        if you=="w" :
            return True
        if you=="s" :
            return False
    elif comp=="w" :
        if you=="s" :
            return True
        if you=="g" :
            return False
    elif comp=="s" :
        if you=="g" :
            return True
        if you=="w" :
            return False
print("Computer's Turn : Gun(g) , Water(w) , Snake(s)")
randNo = random.randint(1,3)
if randNo==1 :
    comp="g"
elif randNo==2 :
    comp="w"
elif randNo==3 :
    comp="s"
you=(input("Yours Turn : Gun(g) or Water(w) or Snake(s) ? : "))
a=gamewin(comp,you)
print(f"Computer Choose : {comp}")
print(f"You Chose : {you}")
if a==True :
    print("Wohoo! You Have Won The Game.....")
elif a==None :
    print("Oh ! O ! The Game is Tied !")
else :
    print("Sorry ! You Lose...")