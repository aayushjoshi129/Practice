#maximum no in array
l1=[2,8,55,9,10]
l2=[]
l3=[]
for i in range (0,len(l1)):
    for j in range(i+1,len(l1)):
        if l1[i]>l1[j]:
            temp=l1[i]
            l1[i]=l1[j]
            l1[j]=temp
            l3.append(l1(i))
print(l1)
print(l3)
# print(f"Max No. in List is {max}")