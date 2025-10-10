// KW 7th Old Enough

#include <stdio.h>
#include <string.h>

int main(void){

    int age[0];

    printf("Hello, how old are you?-\n");
    scanf("%d", age);

    if(age >= 18){
        printf("You are %.0d, you are old enough to vote!", age);
    }else if(age >= 16){
        printf("You are %.0d, you are old enough to drive!", age);
    }else if (age >= 15){
        printf("You are %.0d, you are old enough to get your learners permit!", age);
    }else if (age >= 4){
        printf("You are %.0d, you are old enough to go to school!", age);
    }else{
        printf("You are %.0d, enjoy it while it lasts.", age);
    }

    return 0; 
}

