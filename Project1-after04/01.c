// We will write a programme that generates a random number and asks the player to guess
// it.If the player's guess is higher than the actual number the programme displays "Lower
// Number please". Similarly if the users guess is too low the programme prints "Higher number please"

// when the user guesses the correct number the programme displays the number of guess the player 
// used to arrive at the number

// Use loop and random number generator

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    //%100 gives from 0 to 99
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    // Print the random number
    printf("Random Number: %d\n", randomNumber);

    do{
        printf("Guess the number");
        scanf("%d", &guessed_number);
        if(guessed_number>randomNumber){
            printf("Lower number please!\n");
        }
        else if(guessed_number<randomNumber){
            printf("Higher number please!\n");
        }
        else{
            printf("Congrats!!\n");
        }
        no_of_guesses++;

    } while (guessed_number != randomNumber);

    printf("You guessed the number in %d guesses", no_of_guesses);

    return 0;
}