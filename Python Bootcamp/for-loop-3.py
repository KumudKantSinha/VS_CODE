namesList = ["Jack", "Sparow", "John", "Cena", "Rock", "Brock"]

length = len(namesList)
shouldRestart = True
while shouldRestart:
    removedElement = namesList.pop(0)
    print(removedElement, namesList)
    if len(namesList) == 0:
        shouldRestart = False
    else:
        shouldRestart = True
