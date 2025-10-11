// KW 7th Name Decorator

#include <stdio.h>
#include <string.h>

int main(void){

    char name[100];
    char full_name[100]; // null (doesn't exits)

    printf("Hello, I am the name decorator, please tell me your name! -\n");
    scanf("%s", name);
    
    full_name[0] = '\0'; // empty (but exists)

    strcat(full_name, "~^~"); // ~^~
    strcat(full_name, name); // ~^~name
    strcat(full_name, "~^~"); // ~^~name~^~
    printf("%s\n", full_name);

    full_name[0] = '\0';
    strcat(full_name, "<<<"); 
    strcat(full_name, name); 
    strcat(full_name, ">>>"); 
    printf("%s\n", full_name);

    full_name[0] = '\0';
    strcat(full_name, "---"); 
    strcat(full_name, name); 
    strcat(full_name, "---"); 
    printf("%s\n", full_name);

    full_name[0] = '\0';
    strcat(full_name, "_.^._"); 
    strcat(full_name, name); 
    strcat(full_name, "_.^._"); 
    printf("%s\n", full_name);

    return 0;
}
