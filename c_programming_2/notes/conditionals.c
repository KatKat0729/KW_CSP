// KW 7th Conditionals Notes

#include <stdio.h>
#include <string.h>
/* Logical operators
 %% and
|| or
! not
*/
int main(void){

    /*1.What puts something inside of the “if” statement?
        - if
    
    2. How are conditions written in C? (Below is answer and example)*/

    int grade;
    char name[50];

    printf("What is your grade percent? - \n");
    scanf("%d",&grade);

    printf("What is your name? - \n");
    scanf("%s",&name);

    //printf("", strcmp(name, "Ms.Larose"));
    if(strcmp(name, "Ms.LaRose") == 0){
        printf("You don't get a grade!\n");
    }else if(grade >= 90){
        printf("You have an A!\n");
    }else if(grade >= 80){
        printf("You have a B!\n");
    }else if(grade >= 70){
        printf("You have a C!\n");
    }else{
        printf("You are failing\n");
    }
    
    /* 3. How do we write elif conditions in C?
        - else if
    4. When do else conditions run?
        - if none of the above conditions are true, it will print the else condition.
    5. What are the 3 logical operators in C?
        - and &&
        - or ||
        - not !
        */
       
    return 0;
}