# KW 7th Conditionals Notes

#homework_done = input("Is your homework done?\n").strip().capitalize()

#if homework_done == "Yes":
     #print("Yes, you can go.")
#else:
    #print("Then go do your homework!")

grade = 93.5

if grade >= 90:
    print(f"You have {grade}%, that is an A!")
elif grade >= 80:
    print(f"You have a {grade}%, that is a B!")
elif grade >= 70:
    print(f"You have a {grade}%, that is a C!")
else:
    print(f"You have a {grade}%, that is a D or lower. Do better.")