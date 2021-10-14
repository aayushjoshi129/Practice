str="hello world"
print(len(str))
print(str)
print(str.capitalize())
print(str[2::2])
print(str[-1::-1])
for i in range (len(str)-1,-1,-1):
    print(str[i],end='')