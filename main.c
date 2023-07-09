#include <stdio.h>
#include <string.h>

/*
 * This program re-creates Pokémon's Pokémon League requirements.
 * Requires to enter a number of badges to enter the Pokémon League.
 * Input:
 *        int badge_count: an int to store number of badges
 * Output:
 *        char message[]: a string to display to the user
 */

int main() {
    int requried_badges = 8;                // Used to store the required number
    int badge_count = 0;                    // Used to store the integer input of the user
    char message[] = "Invalid input!";      // This is outputted to the user after execution of main body

    printf("How many gym badges do you have? (0-8) \n");
    int input = scanf("%d", &badge_count);                      /* scanf reads the input stream for input and return
                                                                        * value gets stored in an int variable
                                                                        */
    if(input == 1)                                                      // checks if returned value from scanf is valid or 1
    {
        if (badge_count >= 0 && badge_count < requried_badges)         // Checks if badge count is within range
        {
            printf("You are missing %d badge(s).", requried_badges - badge_count);
            strcpy(
                    message,
                    "You must have 8 badges to enter. Please earn the remaining badge(s) then come back.\n"
                    );                                                 // copies new message to message
        }
        else if(badge_count == requried_badges)                        // Checks if requirement is fulfilled
        {
            strcpy(
                    message,
                    "Congrats! Welcome to the Pokemon League!.\n"
                    );                                                 // copies new message to message
        }
    }
    printf("%s", message);
    return 0;
}
