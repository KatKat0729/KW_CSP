school = "UCAS"
single_digit = 4
how_much = 10
print(how_much)
print(single_digit)

how_much = 777777777777
print(how_much)

name = input("What is your name?\n")
print("Hello",name)

# Treyson has 12 apples, he has 5 friends that he wants to give his apples to. How many apples does each friend get?
apples = 12
friends = 5
print("Each friend gets", apples/friends, "apples!")

# Average age of a group of 4 people

friend1 = 22
friend2= 14
friend3 = 28
friend4 = 24

total = friend1+friend2+friend3+friend4

print(total/4)
average = total/4
print("The average age is:", average)

num_1 = int(input("Tell me a number:\n"))
num_2 = float(input("Tell me another number:\n"))
num_1 += num_2
print("Addition(+): ", num_1)
num_1 -= num_2
print("Subtraction(-): ", num_1)
num_1 *= num_2
print("Multiplication(*): ", num_1)
num_1 /= num_2
print("Division(/): ", round(num_1))
num_1 **= num_2
print("Exponents(**): ", num_1)
num_1 //= num_2
print("Integer Division(//): ", num_1)
num_1 %= num_2
print("Modulo(%): ", num_1)
