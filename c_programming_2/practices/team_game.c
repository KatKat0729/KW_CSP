// SC AS KW GA 7th C Final, hangman
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

//The list of every word that can be used for the game. 
char word_list[][101] = {"milky", "zigzag", "foggy", "mummy", "jolly", "poppy", "giggle", "happily", "fluffy", "halfway", "hedgehog", "kick", "chipmunk", "kabaddi", "clockwork", "lazy", "juicy", "chuckled", "foxglove", "vuvuzela", "plump", "chuck", "fully", "puff", "jacuzzi", "middle", "magnify", "black", "pack", "punch", "publicly", "dumbbell", "hobby", "apply", "quack", "bluebell", "crazy", "block", "puppy", "quiz", "pick", "gulf", "lucky", "clock", "cyborg", "prickly", "clump", "skull", "buzzer", "jugs", "skilful", "cyberpunk", "puzzle", "symbol", "chef", "volleyball", "windmill", "lollipop", "pumpkin", "building", "yolk", "cloud", "wrongly", "blazing", "fury", "clumsy", "pluck", "awful", "church", "yacht", "furlough", "duck", "muddy", "padlock", "flag", "headache", "coccyx", "flapjack", "unhappy", "lifestyle", "globe", "bauble", "decided", "cycling", "awkward", "gypsy", "symbols", "hyperlink", "pebble", "club", "baby", "volume", "review", "puzzling", "quickly", "pudding", "daffodil", "vivarium", "maximum", "stick"};
//This is a list to keep track of all of the letters that the user has guessed.
char guessed_letters[27] = {0};

//This is the number of the letter
int getLetterIndex(char letter) {

    if (letter == 'a')
        return 0;
    else if (letter == 'b')
        return 1;
    else if (letter == 'c')
        return 2;
    else if (letter == 'd')
        return 3;
    else if (letter == 'e')
        return 4;
    else if (letter == 'f')
        return 5;
    else if (letter == 'g')
        return 6;
    else if (letter == 'h')
        return 7;
    else if (letter == 'i')
        return 8;
    else if (letter == 'j')
        return 9;
    else if (letter == 'k')
        return 10;
    else if (letter == 'l')
        return 11;
    else if (letter == 'm')
        return 12;
    else if (letter == 'n')
        return 13;
    else if (letter == 'o')
        return 14;
    else if (letter == 'p')
        return 15;
    else if (letter == 'q')
        return 16;
    else if (letter == 'r')
        return 17;
    else if (letter == 's')
        return 18;
    else if (letter == 't')
        return 19;
    else if (letter == 'u')
        return 20;
    else if (letter == 'v')
        return 21;
    else if (letter == 'w')
        return 22;
    else if (letter == 'x')
        return 23;
    else if (letter == 'y')
        return 24;
    else if (letter == 'z')
        return 25;
    else
    {
        printf("Bad letter %c, ending game\n", letter);
        exit(-1);
    }
}

//Checking wether the letter that the user has guessed is in the word. 1 = true, 0 = false.
int isLetterInWord(char letter, char *word){
    for (int i = 0; i < strlen(word); i++){
        if (letter == word[i])
            return 1;
    }

    return 0;
}

void visual_hangman(int lives){

    //+-----+
    //  |   |
    //  O   |
    // /|\  |
    //  |   |
    // / \  |
    //      |


    if(lives == 7){
        printf("+-----+\n");
        printf("  |   |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");
    }
    else if(lives == 6){
        printf("+-----+\n");
        printf("  |   |\n");
        printf("  O   |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");
    }
    else if(lives == 5){
        printf("+-----+\n");
        printf("  |   |\n");
        printf("  O   |\n");
        printf("  |   |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");
    }
    else if(lives == 4){
        printf("+-----+\n");
        printf("  |   |\n");
        printf("  O   |\n");
        printf(" /|   |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");
    }
    else if(lives == 3){
        printf("+-----+\n");
        printf("  |   |\n");
        printf("  O   |\n");
        printf(" /|\\  |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");
    }
    else if(lives == 2){
        printf("+-----+\n");
        printf("  |   |\n");
        printf("  O   |\n");
        printf(" /|\\  |\n");
        printf("  |   |\n");
        printf("      |\n");
        printf("      |\n");
    }
    else if(lives == 1){
        printf("+-----+\n");
        printf("  |   |\n");
        printf("  O   |\n");
        printf(" /|\\  |\n");
        printf("  |   |\n");
        printf(" /    |\n");
        printf("      |\n");
    }
    else if(lives == 0){
        printf("+-----+\n");
        printf("  |   |\n");
        printf("  O   |\n");
        printf(" /|\\  |\n");
        printf("  |   |\n");
        printf(" / \\  |\n");
        printf("      |\n");
    }
}

//For every letter it checks if that letter is in the guessed_letters list. If it is it will print it, otherwise, it will print " _ ".
void displayWord(char *word) {
    for (int i = 0; i < strlen(word); i++){
        int letter_index = getLetterIndex(word[i]);
        if (guessed_letters[letter_index] == 1)
            printf("%c", word[i]);
        else
            printf(" _ ");
    }

    printf("\n");
}

//It's checking if every letter is in guessed_letters 1 = true, 0 = false.
int didGuessAllLetters(char *word) {
    for (int i = 0; i < strlen(word); i++){
        int letter_index = getLetterIndex(word[i]);
        if (guessed_letters[letter_index] == 0)
            return 0;
    }

    return 1;
}

//This is the main game loop
int main(void){
    int lives = 7;
    int letter_index = -1;
    char word[100];

    // Get random word for Hangman
    srand(time(NULL));
    int num = rand() % 100;
    strcpy(word, word_list[num]);
    
    while (lives >= 1)
    {
        //This is displaying the characters in the word (" _ "), and asking the user to guess another letter.
        char letter;
        visual_hangman(lives);
        displayWord(word);
        printf("You have %i lives left.\n", lives);
        printf("Guess a letter - \n");

        scanf("%c", &letter);

        letter_index = getLetterIndex(letter);
        guessed_letters[letter_index] = 1;

        //If the letter is in the word, the user won't lose a life, and they get to keep guessing.
        if (isLetterInWord(letter, word))
        {
            printf("Correct.\n");
        }
        //If the user guessed incorrectly, and the letter is not in the word, they will lose a life. They get to keep guessing until they run out of lives.
        else
        {
            lives -= 1;
            printf("Incorrect\n");
        }

        //If the user guesses the word, they will be congradulated, and told how many lives they still had, and the word.
        if (didGuessAllLetters(word)) {
            printf("Congratulations, you won with %i lives left, the word was %s\n", lives, word);
            exit(0);
        }
        
        // This is what chatgpt says to do because it keeps printing the \n from the scanf and making it so the letter is incorrect :(
        // Basically the new line (from the \n) is being printed out, and it can only be a LETTER, and if it's more than just a letter, the game will exit.
        int c;
        while ((c = getchar()) != '\n' && c != EOF) { }
    }

    //If the user runs out of lives, they lose, and they will be told what the word was.
    visual_hangman(lives);
    printf("You don't have any more guesses, you're dead. The word was %s\n", word);
}