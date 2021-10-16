a=[1,2,3,4,'aayush']        #List Uses a=[, , , ,]  -- Square Brackets
print(type(a))              
a1=[1,2,3,4,'aayush',4,4]    #List Can Store Duplicate Values and are Changable(Mutable)
print(a1)
print(type(a1))
b={2,3,'aayush'}            #Set Uses b={, , , ,} -- Curley Braces
print(type(b))
b1={2,3,'aayush',3,4}       #Set Cannot Store Duplicate Values. It Shows Union of Common
print(b1)
print(type(b1))
c=(8,9,'ayush')              #Tuple Uses (, , , ,) -- Paranthesis
print(type(c))   
c1=(8,9,'ayush',8,9)         #Tuple Can Contain Duplicate Values
print(c1)
print(type(c1))          
dict={'a':'ram','b':'shyam',1:3}  #Dictionary Uses { key:value , key:value , key:alue , key:value }  -- Curley Braces With Key Value Pair Separated by colon (:)
print(type(dict))
dict1={'a':'ram','b':'shyam',1:3,'a':'harry' ,'a':'harry'}  #Dictionary Uses Updated Values Instead of Previous Values and Shows Only Union of Common Values
print(dict1)
print(type(dict1))