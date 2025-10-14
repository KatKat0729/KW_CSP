// KW 7th FizzBuzz

#include <stdio.h>
void birthday(char* name, int age){
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday dear %s!\n", name);
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday %s you are old!\n", name, age);
}

int mul(int x, int y){
    return x *y;
}

float get_number(char* type){
    float value;
    printf("How many %s do you have?\n", type);
    scanf("%f\n", &value);
    return value;

}

int main(void){
    birthday("Ellis", 19);
    birthday("Sally", 40);
    birthday("Reese", 18);

    int product = mul(8,5);
    printf("%d\n", product);
    printf("%d\n", mul(4,6));

    float pencils = get_number("pencils");
    float notebooks = get_number("notebooks");
    printf("You have %.2f pencils and %.2f notebooks!\n", pencils, notebooks);
    return 0;
}

/*
What a function is

    A collection of code designed to complete a certain task.
    NEVER DEFINE A FUNCTION INSIDE OF A FUNCTION.


Why we use functions

    To make longer code shorter and easier to read, and also so we don’t have to copy and paste so much.


How to write a function in C

    (You cant make a funciton inside of a function!!)

    void birthday(char* name, int age){
        printf("Happy Birthday to you!\n");
        printf("Happy Birthday to you!\n");
        printf("Happy Birthday dear %s!\n", name);
        printf("Happy Birthday to you!\n");
        printf("Happy Birthday %s you are old!\n", name, age);
}

int main(void){
    birthday();
    birthday();
    birthday();

    return 0;


What are arguments and parameters?

    Parameters are the variables used when defining the function. (Must set datatype!)
    Arguments are the actual values when using the function that we call.


How do arguments and parameters work together?

    Parameters and arguments work together, so when you're making a function, 
    you have to set a 'name' for it, which is the parameter. One you're set
    a parameter, an argument calls the function so it goes in the terminal!


How to use parameters and arguments in C

    void example(char* parameter){ 
        (stuff inside the function that will be printed when you call it)

    parameter("argument")
    parameter("argument")


What are return statements?

    The output of the function, what the function gives back.


How do return statements change how you define a function in C?

    You have to state what type of data your function is returning.


What do return statements do with the information?

    Where you take a specific value and place it where you called the function taking information and putting it where we called the funciton.

    
*/