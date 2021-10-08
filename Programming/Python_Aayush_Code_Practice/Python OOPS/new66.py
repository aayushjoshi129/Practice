import timeit
timelist=timeit.timeit(stmt="[1,2,3,4,5]",number=1000000)
timetuple=timeit.timeit(stmt="(1,2,3,4,5)",number=1000000)
print("Time Taken by list is ",timelist)
print("Time Taken by Tuples is ",timetuple)