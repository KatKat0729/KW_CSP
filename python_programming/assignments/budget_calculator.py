# KW 7th Budget Calculator

income = float(input("What is your monthly income? "))
rent = float(input("What is your monthly rent? "))
utilities = float(input("What is your monthly utilities? "))
groceries = float(input("What is your monthly groceries? "))
trans =float(input("What is your monthly transportation? "))
savings = income*.1

spending_money = income-rent-utilities-groceries-trans-savings

percent_rent = rent/income*100
percent_utilities = utilities/income*100
percent_groceries = groceries/income*100
percent_trans = trans/income*100

print("Your rent is $", rent, "and that is ", percent_rent, "% of your income.")
print("Your utilities are $", utilities, " and that is ", percent_utilities, "% of your income.")
print("Your groceries is $", groceries, " and that is ", percent_groceries, "% of your income.")
print("Your transportation is $", trans, " and that is ", percent_trans, "% of your income.")
print("You should save $", savings, " a month, that is 10% of your income.")
print("You have $", spending_money, " of spending money each month!")
