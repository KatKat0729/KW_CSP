# KW 7th Functions Notes

def welcome():
    name = input("What is your name?\n")
    print(f"Hello, {name}!")


welcome()
welcome()
welcome()
welcome()
welcome()
welcome()

def add(number, number2):
    number += number2
    print(number)


num1 = 12
num2 = 4

add(11, 7)
add(177, 77)
add(77,7)


import random 

def roll(mod):
    return random.randint(2, 20) + mod

dex = roll(5)
str = roll(-1)
int = roll(3)
char = roll(4)

print("Here are your stats!")

print(f"Strength: {str}\n Dexterity: {dex}\nIntelligence: {int}\n Charisma: {char}")