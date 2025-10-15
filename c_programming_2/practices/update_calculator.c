// KW 7th Updated Budget Calculator 
#include <stdio.h>

float ask(const char* ask_question){
    float answer = 0;
    printf("%s", ask_question);
    scanf("%f", &answer);
    return answer;
}

float percent(float income, float value){
    float answer = 0;
    answer = value/income*100;
    return answer;
}

int main(void){
    float income = 0;
    float rent = 0;
    float utilities = 0;
    float groceries = 0;
    float trans = 0;
    float savings = 0;

    income = ask("What is your monthly income?\n");
    rent = ask("What is your monthly rent?\n");
    utilities = ask("What is your monthly utilities?\n");
    groceries = ask("What is your monthly groceries?\n");
    trans = ask("What is your monthly transportation?\n");
    savings = income*.1;

    float spending_money = income-rent-utilities-groceries-trans-savings;

    float percent_rent = percent(income, rent);
    float percent_utilities = percent(income, utilities);
    float percent_groceries = percent(income, groceries);
    float percent_trans = percent(income, trans);
    float percent_savings = percent(income, savings);

    printf("Your rent is $%.2f and that is %.0f%% of your income.\n", rent, percent_rent);
    printf("Your utilities are $%.2f and that is %.0f%% of your income.\n", utilities, percent_utilities);
    printf("Your groceries is $%.2f and that is %.0f%% of your income.\n", groceries, percent_groceries);
    printf("Your transportation is $%.2f and that is %.0f%% of your income.\n", trans, percent_trans);
    printf("You should save $%.2f a month, that is %.0f%% of your income.\n", savings, percent_savings);
    printf("You have $%.2f of spending money each month!\n", spending_money);

    return 0;
}