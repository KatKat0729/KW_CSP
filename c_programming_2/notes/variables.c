// KW 7th Variables Notes
#include <stdio.h>

int main(void){
    int grade; // 4 bytes
    float pi = 3.14; // 4 bytes
    double long_pi = 3.14159265; // 8 bytes
    char letter_grade; // 1 byte
    char name[] = "Vinny";

    printf("What is your grade percentage as a whole number? ");
    scanf("%d", &grade);
    // user input
    
    printf("What is your letter grade?\n");
    scanf(" %c", &letter_grade);

    printf("You have a %d in the class. That is an %c. ", grade, letter_grade);
    
    //printf("%s did it!\n ", name);


    

    return 0;
}

// Python 
// grade = 95
// grade = "A"
// dynamic typed language
// all variables take same amount of space
