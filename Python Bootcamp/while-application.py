# aabbccz
# string compress - a2b2c2z1
# zzxyyya
# z2x1y3a1

# aabbccz - a2b2c2z1

# index = 0  - a
# 1 - count increment - index incremem
# index  = 1


ipString = "aabbacczxxxq"
length = len(ipString)
index = 0
result = ""
while index < length:
    letter = ipString[index]
    count = 1
    # && ||
    # and or
    while(index < length - 1 and letter == ipString[index + 1]):
        count += 1
        index += 1
    result = result + letter + str(count)

    index += 1
print(result)
