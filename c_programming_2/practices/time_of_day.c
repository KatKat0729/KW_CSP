// KW 7th Time Of Day

#include <stdio.h>
#include <string.h>

int main(void) {
    int time = 0;

    printf("What is the hour in military time -\n");
    scanf("%d", &time);

    if (time >= 18 || time <= 1) {
        printf("Good evening!\n");
    }
    else if (time >= 12 && time < 18) {
        printf("Good afternoon!\n");
    }
    else{
        printf("Good morning!\n");
    }

    return 0;
}
