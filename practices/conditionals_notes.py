# KW 7th Conditionals Notes

#homework_done = input("Is your homework done?\n").strip().capitalize()

#if homework_done == "Yes":
     #print("Yes, you can go.")
#else:
    #print("Then go do your homework!")

grade = 110

if grade >= 90:
    if grade > 100:
        print("You cheater, that's not possible >:()")
    else:
        print(f"You have {grade}%, that is an A!")
elif grade >= 80:
    print(f"You have a {grade}%, that is a B!")
elif grade >= 70:
    print(f"You have a {grade}%, that is a C!")
else:
    print(f"You have a {grade}%, that is a D or lower. Do better.")



name = input("What is your name?\n")

if name == "Ms Larose":
    print("You are the teacher!")
elif name == "Tia" or name == "Ashley":
    print("You are a TA")
else:
    print(f"Hello {name}, you are a student!")

