import sys
import timeit
a=[1,2,3,4,5]
b=(1,2,3,4,5)
print(type(a))
print(type(b))
print("Size Taken by list is ",sys.getsizeof(a))
print("Size Taken by Tuples is ",sys.getsizeof(b))
timelist=timeit.timeit(stmt="[1,2,3,4,5]",number=10000)
timetuple=timeit.timeit(stmt="(1,2,3,4,5)",number=10000)
print("Time Taken by list is ",timelist)
print("Time Taken by Tuples is ",timetuple)