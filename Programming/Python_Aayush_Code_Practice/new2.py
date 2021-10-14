# Enter your code here. Read input from STDIN. Print output to STDOUT
arr=[]
n=eval(input("enter the no. of Elements to insert :"))
# len=len(arr)
for i in range (n):
    m=eval(input(f"enter {i+1}th Number in array :"))
    arr.append(int(m))

for i in range (n):
    print(arr[i] ,end=" ")

key=eval(input("\nEnter key you want to search :"))

for i in range (len(arr)):
    if(arr[i]==key):
        print(f"element is found at index {i} and its value is :",arr[i])
