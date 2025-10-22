// SC AS KW GA 7th C Final, hangman
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char word[][1000] ={"milky", "zigzag", "foggy", "mummy", "jolly", "poppy", "giggle", "happily", "fluffy", "halfway", "hedgehog", "photography", "chipmunk", "kabaddi", "clockwork", "lazy", "juicy", "chuckled", "foxglove", "vuvuzela", "plump", "chuck", "fully", "puff", "jacuzzi", "middle", "magnify", "black", "pack", "punch", "publicly", "dumbbell", "hobby", "apply", "quack", "bluebell", "crazy", "block", "puppy", "quiz", "pick", "gulf", "lucky", "clock", "cyborg", "prickly", "clump", "skull", "buzzer", "jugs", "skilful", "cyberpunk", "puzzle", "symbol", "chef", "vodka", "windmill", "lollipop", "pumpkin", "building", "pyongyang", "cloud", "wrongly", "blazing", "fury", "clumsy", "pluck", "awful", "church", "yacht", "furlough", "duck", "muddy", "padlock", "femboy", "headache", "coccyx", "flapjack", "unhappy", "lifestyle", "globe", "bauble", "decided", "cycling", "awkward", "gypsy", "symbols", "hyperlink", "pebble", "club", "baby", "volume", "review", "puzzling", "quickly", "pudding", "daffodil", "vivarium", "maximum", "suck"};


int display_word(char letter, char display, char guessed_letters){
    display = "_";
    for(char letter_in_word){
        if (char letter in char guessed_letters);{
            printf("%d", letter);
        }
        else{
            printf("%d", display);
        }
    }
    
    char did_guess_all_letters
        for letter in word;
            if (!letter == guessed_letters);
                return 1;
        return 0;
}
 // Start of game loop
    while int lives(>=1){
         printf("You have %d lives left.", lives);
    }
        display_word(){
            char guess = printf("Guess a letter - \n").strip().lower();
        if (len(guess) > 1){
            printf("Stop wasting my time.");
            sys.exit();
        }
        srtcat(char guessed_letters, char guess)
        if (guess in word){
            printf("Correct.");
        }

        else{
            lives -= 1
            printf("Incorrect.");
        }
        
        if did_guess_all_letters();
            printf("Congratulations, you won with %d lives left!\n", lives);
            sys.exit();
        }

    if (){i    

    }int main(void){
        char word_list = {"hello"};
        int lives = 7;
        char guessed_letters = [];
    

        display_word();
        did_guess_all_letters();
        srand(time(NULL));
        
        for(int i=0; i<5; i++){
            int num = rand() % 8;
            printf("Our random person is %s\n", word[num]);
        }
    
        
        
        printf("You don't have any more guesses, you lose. The word was %s.\n", word);
        sys.exit()

        printf("You don't have any more guesses, you lose. The word was %d", word);
        sys.exit()
    
    return 0;
}























