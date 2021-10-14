a=[]
def multiple(num,length):
    for i in range(1,length+1):
        mult=num*i
        a.append(mult)
    return print(a)
multiple(6,6)