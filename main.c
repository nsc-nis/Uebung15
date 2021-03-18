#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Übung 16
 * Autor: Niklas Schachl
 * Version: 1.0
 * Datum: 18.3.2021
 */
int main()
{
    printf("**********************************\n");
    printf("* Welcome to NIS Number Guesser! *\n");
    printf("*                                *\n");
    printf("**********************************\n");

    int seed = time(NULL);
    srand(seed);

    int secret = rand()%100 + 1;
    int guess;
    int true = -1;

    while (true != 0)
    {
        printf("* --> Guess a number: ");
        scanf("%d", &guess);
        if (guess == secret) {
            printf("Correct! The number was %d\n", secret);
            true = 0;
        } else if (guess < secret) {
            printf("Wrong! The number you are looking for is higher!\n");
            true = 1;
        } else if (guess > secret) {
            printf("Wrong! The number you are looking for is lower!\n");
            true = 1;
        }
    }
    return 0;
}