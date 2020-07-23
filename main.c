#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    int i , val, rval, guessTrue = 0;
    srand ( time(NULL) );
    rval = rand() % 100;
    printf("\n\nTHE GUESSING GAME made by Noyan Alakoç\n\n");
    printf("Welcome to the Guessing game.\nRULES:\n1.8 guesses available for you to guess a randomly generated number between 0-100.");
    printf("\n2. You can WIN the game when the number guessed is same as the randomly generated number.");
    printf("\n3. Hints will be provided during the PLAY.\n");

    for(i = 1; i <= 8 ; i++)
    {
        printf("\n\nGUESS %d: ", i);
        scanf("%d", &val);
        if (val > rval)
            printf("Your value is GREATER THAN the randomly generated number");
        else if (val < rval)
            printf("Your value is LESSER THAN the randomly generated number");
        else
        {
            guessTrue = 1;
            break;
        }
    }
    if(guessTrue)
        printf("\nCongratulations!!! You guessed it right in %d tries.", i);
    else
        printf("\n\nMission failed. We'll get them next time. The number was = %d", rval);

    getch();

    return 0;
}
