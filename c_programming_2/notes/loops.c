// KW 7th Loops Notes

#include <stdio.h>

int main(void){
    int nums[] = {1,654,4,56,8,742,5}; // Lists are actually called Arrays by literally everyone else
    char candies[][20] = {"KitKat", "Skittles", "Nerds", "Hershey", "Reese's"}; // First bracket is for the number in the list, the second is for the length of your string.

    for(int x = 0; x < 7; x++){
        printf("%d\n", nums[x]); // X is going to start at 0, and count all the way to 7, and stop there, increasing by one.
    }

    for(int i = 0; i < 5; i++){ // Start point, stop point, what we count by.
        printf("%s, is my favorite candy.\n", candies[i]);
    }

    for(int num = 1; num < 11; num++){
        printf("%d\n", num);
    }

    int num = 0;
    while(num < 11){ //Must put condition in parenthesis
        printf("%d\n", num);
        num++;
    }

/*
What is a loop? 
    Retructured while loops, all taken and put on the same line.

What are the two types of loops?
    For loops and While loops.
    
What is iteration
    A variable to keep track of the ammount of times it loops, one instance of a loop.

What are arrays? 
Lists

How do you make lists in C? 
    int nums[] = {1,2,3,4,5,6,7};

How do you make for loops in C? 
    for(int num = 1; num < 11; num++){
        printf("%d\n", num);

How do you make while loops in C?
    int num = 0;
    while(num < 11){
        printf("%d\n", num);
        num++;
    }

*/
    return 0;
}