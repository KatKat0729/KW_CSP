# KW 7th Time of Day Assignment

time = int(input("What is the hour for you in military time?"))

if time <= 12:
    print(f"It is {time} for you, good morning! (:)")
elif time >= 12 and time <= 17:
    print(f"It is {time} for you, good afternoon! (:")
elif time >= 17:
    print(f"If it {time} for you, good evening! (:")