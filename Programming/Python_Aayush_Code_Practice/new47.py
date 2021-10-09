import random
randNo=random.randint(1,10)
you=None
while you!=randNo:
    you=int(input("Guess The Number Between 1 And 10 :"))
    if you==randNo:
        print("Yay !! You Got it Right")
    elif you>randNo:
        print("Guess Again !! You Guessed Greater Number ")
    elif you<randNo:
        print("Guess Again !! You Guessed Lesser No.")
    
