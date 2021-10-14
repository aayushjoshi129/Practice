l1=[5,10,15,20,5,10]
l2=l1
print(f"List Before Sorting : {l1}")
l2.sort(reverse=False)
print(f"List After Sorting : {l1}")
l1.pop(4)
print(l2)