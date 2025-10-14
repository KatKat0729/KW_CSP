// KW 7th FizzBuzz

#include <stdio.h>

int main(void){
    int x = 1;

    while(x < 51){
        if(x % 15 == 0){
            printf("FizzBuzz\n");
        }
        else if(x % 5 ==0){
            printf("Buzz\n");
        }else if(x % 3 ==0){
            printf("Fizz\n");
        }else{
            printf("%d\n", x);
        }     
        x++;
    }
    
    return 0;
}
