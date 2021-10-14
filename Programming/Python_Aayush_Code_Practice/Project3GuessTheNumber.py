import random
randNo=random.randint(1,100)
you=None
guesses=0
while you!=randNo :
    you=int(input("Enter a Number To Guess in Between 1 to 100 : "))
    if you==randNo :
        print("Wohoo! You Guessed it Right....")
    guesses+=1
    if you>randNo :
        print("Try To Enter a Smaller Number....")
    elif you<randNo :
        print("Try To Enter a Larger Number....")
print(f"Comp Guessed it {randNo} and you guessed it {you}")
print(f"But You Guessed it in {guesses} times... ")