#reverse of a number 
#43654449882
#284464
n=43654449882
rev=0
while n>0:
    rev=rev*10 + n%10
    n=n//100
print(rev)