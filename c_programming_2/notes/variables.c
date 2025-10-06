// KW 7th Variables Notes
#include <stdio.h>

int main(void){

    int grade; // 4 bytes
    float pi = 3.14; // 4 bytes
    double long_pi = 3.14159265; // 8 bytes
    char letter_grade; // 1 byte
    char name[50];


    // user input

    
    printf("What is your name?");
    fgets(name, sizeof(name), stdin);



    printf("What is your grade percentage as a whole number? ");
    scanf("%d", &grade);
    while(getchar()!= '\n');
    {
        /* code */
    }



    printf("What is your letter grade?\n");
    scanf(" %c", &letter_grade);

        printf("%s did it!\n ", name);
        printf("You have a %d in the class. That is a(n) %c.\n", grade, letter_grade);



    return 0;
}