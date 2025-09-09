#KW 7th Strings notes practice
print("I did it!")

#Examples
first_name = input("What is your first name?\n").strip()
last_name = input("What is your last name?\n").strip()

sentence = '            The quick brown fox jumps over the lazy dog               '.strip()
print(sentence.find("jumps"))
print(sentence[20:25])

full_name = first_name + " " + last_name

print("Welcome to my program", full_name)

# Sanitization and stupid proofing!
# Getting rid of spaces, fixing capitilization is sanitization
# Stupid proofing is building your code so your users can't break it

# Debugging is fixing code
    # Syntax Error - A mistake in your grammar
error = "This is a bug"
print(error)
