// KW 7th My Family Loops

#include <stdio.h>

int main(void){
    char family_members[][20] = {"Ana", "Adam", "Kathryn", "Nathan", "Mars", "Vinny", "Emma", "Douglas"};

    for(char x = 0; x < 8; x++){
        printf("Hello, %s!\n", family_members[x]);
    }
    
    return 0;
}