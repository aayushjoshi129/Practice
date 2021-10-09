while (True) :
  print("Press Q to Exit : ")
  a=input("Enter a Number : ")
  if a == "q" :
    break 
  try :
    a=int(a)
    if a>20 :
      print("You Entered a number greater than 20")
  except Exception as e :
      print(f"Your Input Resulted in an error : {e}")

print("Thanks! For Playing This Game...")