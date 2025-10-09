// KW 7th Expressions Practice

#include <stdio.h>
#include <math.h>

int main(void){

    float income = 0;
    float rent = 0;
    float utilities = 0;
    float groceries = 0;
    float trans = 0;

    printf("What is your monthly income?\n");
    scanf("%f", &income);

    printf("What is your monthly rent?\n");
    scanf("%f", &rent);

    printf("What is your monthly utilities?\n");
    scanf("%f", &utilities);

    printf("What is your monthly groceries?\n");
    scanf("%f", &groceries);

    printf("What is your monthly transportation?\n");
    scanf("%f", &trans);

    float savings = income*.1;

    float spending_money = income-rent-utilities-groceries-trans-savings;

    float percent_rent = rent/income*100;
    float percent_utilities = utilities/income*100;
    float percent_groceries = groceries/income*100;
    float percent_trans = trans/income*100;
    float percent_savings = savings/income*100;

    printf("Your rent is $%.2f and that is %.0f%% of your income.\n", rent, percent_rent);
    printf("Your utilities are $%.2f and that is %.0f%% of your income.\n", utilities, percent_utilities);
    printf("Your groceries is $%.2f and that is %.0f%% of your income.\n", groceries, percent_groceries);
    printf("Your transportation is $%.2f and that is %.0f%% of your income.\n", trans, percent_trans);
    printf("You should save $%.2f a month, that is %.0f%% of your income.\n", savings, percent_savings);
    printf("You have $%.2f of spending money each month!\n", spending_money);

    return 0;
}