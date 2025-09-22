# KW 7th Loops Notes

foods = ["Chocolate", "Zupa Soup", "Strawberries", "Cookies", "Garlic Bread", "Pound cake", "Cucumber"]

#For Loop
#for food in foods:
    #print(f"{food} is my favorite food!")
    #print("hi!")

#for x in range(1,20):
    #print(x)

#Infinite Loop
#i = 0
#while True:
    #print(i)
    #i+=1

#While Loop
#i = 1

#while i < 20:
    #print(i)
    #i+= 1

x = 1

while x < 21:
    if x % 2 == 0:
        print(f"{x} is an even number.")
    else:
        print(f"{x} is an odd number.")
    x += 1

import random

d = 1
end = random.randint(1,20)

while d != end:
    print("Duck")
    d += 1

print("Goose")

while True:
    if d == end:
        print("Goose!")
        break
    else:
        print("Duck")
        d += 1