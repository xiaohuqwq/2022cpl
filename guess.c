#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <process.h>
int main()
{
    int high = 100;
    int number_of_tries = 7;

    printf("Let us play the Guess the Number game.\n"
           "The computer will generate a random number between 1 and %d.\n"
           "You have %d tries.\n",
           high, number_of_tries);

    srand(time(NULL));
    int secret = rand() % high + 1;

    while (number_of_tries > 0)
    {

        printf("Please input your guess number.\n"
               "You still have %d tries.\n",
               number_of_tries);
        int guess = 0;
        scanf("%d", &guess);
        printf("Test: guess = %d.\n", guess);

        if (guess == secret)
        {
            printf("You Win\n");
            break;
        }
        else if (guess > secret)
        {
            printf("guess > secret\n");
        }
        else if (guess < secret)
        {
            printf("guess < secret\n");
        }

        number_of_tries--;
    }
    while (number_of_tries == 0)
    {
        /* code */
        printf("You Lose!\n");
        break;
    }
    getchar();
    system("pause");
    return 0;
}