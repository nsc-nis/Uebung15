#include <stdio.h>

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

    long int random(void);

    int secret = random()%100 + 1;
    int guess;
    int true = -1;

    while (true != 0)
    {
        printf("* --> Guess a number: \n");
        scanf("%d", &guess);
        if (guess == secret) {
            printf("Correct! The number was %d\n", secret);
            true = 0;
        } else if (guess < secret) {
            printf("Wrong! The number you are looking for is higher!\n");
            printf("%d -> %d \n", guess, secret);
            true = 1;
        } else if (guess > secret) {
            printf("Wrong! The number you are looking for is lower!\n");
            printf("%d -> %d \n", guess, secret);
            true = 1;
        }
    }
    return 0;
}
