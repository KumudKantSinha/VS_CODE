myList = [1, 2, 3, 4, -99]

# advance for loop
# for el in myList:
#     print(el)

length = len(myList)
# length = 5 - what will be your index
# 0 - 4

# starting point , ending point , step
# ending point is exclusive

for idx in range(length - 1, -1, -1):
    print("At index ", idx, " element is ", myList[idx])
