// KW 7th Silly Sentences
#include <stdio.h>
#include <string.h>

int main(void){
    // Roses are [ADJECTIVE], Violets are [COLOR], Sugar is [NOUN], and so are [PLURAL NOUN]

    char adjective[25];
    char color[25];
    char adjective2[25];
    char plural_noun[25];

    printf("Give me an adjective - \n");
    scanf("%s", adjective);

    printf("Give me a color - \n");
    scanf("%s", color);

    printf("Give me another adjective - \n");
    scanf("%s", adjective2);

    printf("Give me a plural noun - \n");
    scanf("%s", plural_noun);
    
    printf("Roses are %s, Violets are %s, Sugar is %s, and so are %s.", adjective, color, adjective2, plural_noun);

    return 0;
}
