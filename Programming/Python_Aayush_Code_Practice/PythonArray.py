arr1 = []
arr2 = []
arr = []
x,y=0,0

n1 = int(input("Enter no. of elements in 1st array : "))

for i in range(0,n1):
  print(f"Enter {i+1} element in 1st array : ")
  elm1 = int(input())
  arr1.append(elm1)

n2 = int(input("Enter no. of elements in 2nd array : "))

for j in range(0,n2):
  print(f"Enter {j+1} element in 2nd array : ")
  elm2 = int(input())
  arr2.append(elm2)

print(f"Array 1 before sorting {arr1}")
print (f"Array 2 before sorting {arr2}")
len1 = len(arr1)
len2 = len(arr2)

while ((x < len1) and (y < len2)):
  if (arr1[x] < arr2[y]):
    arr.append(arr1[x])
    x=x+1
  else:
    arr.append(arr2[y])
    y=y+1

while (x<len(arr1)):
  arr.append(arr1[x])
  x= x+1

while (y<len(arr2)):
  arr.append(arr2[y])
  y= y+1

print (f"Array after merging and sorting is {arr}")