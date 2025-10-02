// KW 7th Variables Notes
#include <stdio.h>

int main(void){
    int grade = 95; // 4 bytes
    float pi = 3.14; // 4 bytes
    double long_pi = 3.14159265; // 8 bytes
    char letter_grade = 'A'; // 1 byte
    char name[] = "Vinny";
    printf("%s did it! ", name);
    printf("You have a %d, in the class. That is an %c", grade, letter_grade);

    return 0;
}

// Python 
// grade = 95
// grade = "A"
// dynamic typed language
// all variables take same amount of space
