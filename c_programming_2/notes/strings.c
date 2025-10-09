// KW 7th Strings Notes

#include <stdio.h>
#include <string.h>

int main(void){

    char name[] = "Andrew";

    char last_name[25];

    printf("Tell me your last name -\n");
    scanf("%s", last_name);
    char full_name[50];
    full_name[0] = '\0'; // \ made it slightly less broken, found it on the internet
    printf("[%s]\n", full_name);
    strcat(full_name, name);
    printf("[%s]\n", full_name);

    printf("%c\n", last_name[0]);
    last_name[0] = 'R';

    strcat(full_name, " ");
    printf("[%s]\n", full_name);

    strcat(full_name, last_name);
    printf("[%s]\n", full_name);

    printf("Your name is %s %s", name, last_name);
    printf("%zu", strlen(name));
    printf("%zu", sizeof(name));

    //What is the difference between a string and a character?
        //A string is a sequence of characters. %s
        //A character is just a single letter. %c

    //What types of quotation marks do we need for a string?
        // " "

    //What library do we need to include to access the string functions in C?
        //#include <string.h>

    //List functions the library allows us to use.
        //strcat()
        //strchr()
        //memcmp()

    //How do we concatenate strings in C?
        //strcat()

    //How do we get individual characters from a string in C?
        // ' '

    return 0;
}