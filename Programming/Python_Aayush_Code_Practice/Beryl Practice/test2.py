#maximum no in array
l1=[2,8,55,9,44]
max=l1[0]
max2=l1[0]
for i in range (len(l1)):
    if l1[i]>max:
        max2=max
        max=l1[i]
    elif l1[i]>max2:
        max2=l1[i]
print(f"Max No. in List is {max}")
print(f"Second Max No. in List is {max2}")