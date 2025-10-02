# KW 7th Updated Budget Calculator 

def ask(ask_question):
    answer = float(input(ask_question))
    return answer


income = ask("What is your monthly income?\n")
rent = ask("What is your monthly rent?\n")
utilities = ask("What is your monthly utilities?\n")
groceries = ask("What is your monthly groceries?\n")
trans = ask("What is your monthly transportation?\n")
savings = income*.1

spending_money = income-rent-utilities-groceries-trans-savings


def percent(income, value):
    answer = value/income*100
    return answer

percent_rent = percent(income, rent)
percent_utilities = percent(income, utilities)
percent_groceries = percent(income, groceries)
percent_trans = percent(income, trans)

print("Your rent is $", rent, "and that is ", percent_rent, "% of your income.")
print("Your utilities are $", utilities, " and that is ", percent_utilities, "% of your income.")
print("Your groceries is $", groceries, " and that is ", percent_groceries, "% of your income.")
print("Your transportation is $", trans, " and that is ", percent_trans, "% of your income.")
print("You should save $", savings, " a month, that is 10% of your income.")
print("You have $", spending_money, " of spending money each month!")