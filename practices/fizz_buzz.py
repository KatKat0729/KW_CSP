# KW 7th FizzBuzz

x = 1

while x < 51:
    if x % 15 ==0:
        print(f"FizzBuzz")
    elif x % 5 ==0:
        print("Buzz")
    elif x % 3 ==0:
        print("Fizz")
    else:
        print(f"{x}")
    x += 1