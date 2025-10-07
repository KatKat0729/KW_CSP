// KW 7th First Program

#include <stdio.h>

int main(void){

    char name[50]; // Declaring the variable

    printf("What is your name?\n"); // Question for user

    scanf("%s", name); // Ask user for input, stores that input in 'name'

    printf("Hello %s! Welcome to your first C program.\n", name); //Printing the input

    return 0;
}