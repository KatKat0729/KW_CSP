// KW 7th Silly Sentences
#include <stdio.h>
#include <string.h>

int main(void){
    // Roses are [ADJECTIVE], Violets are [COLOR], Sugar is [NOUN], and so are [PLURAL NOUN]
    char adjective = 0;
    char color = 0;
    char adjective2 = 0;
    char plural_noun = 0;

    printf("Give me an adjective - \n");
    

    printf("Give me a color - \n");
    

    printf("Give me another adjective - \n");
    

    printf("Give me a plural noun - \n");
    
    scanf("%s", &adjective);
    scanf("%s", &color);
    scanf("%s", &adjective2);
    scanf("%s", &plural_noun);

    printf("Roses are %s, Violets are %s, Sugar is %s, and so are", adjective, color, adjective2, plural_noun);

    return 0;
}
