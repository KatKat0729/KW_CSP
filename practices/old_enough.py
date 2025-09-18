# KW 7th Old Enough Assignment

age = int(input("How old are you?"))

if age >= 18:
    print(f"You are {age}, you are old enough to vote!")
elif age >= 16:
    print(f"You are {age}, you are old enough to drive!")
elif age >= 15:
    print(f"You are {age}, you are old enough to get your learners permit!")
elif age >= 4:
    print(f"You are {age}, you are old enough to go to school!")
else:
    print(f"You are {age}, enjoy it while it lasts.")