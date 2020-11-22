#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
    int random=0;
    int guess=0;
    int maxGuess;
    time_t t;
    srand((unsigned) time(&t));
    random= rand() %21;
    printf("\n This is a guessing game.");
    for(maxGuess=5;maxGuess > 0;--maxGuess)
    {
        printf("\n you have %d tr%s left.",maxGuess,maxGuess == 1?"y":"ies");
        printf("\n Enter the guess: ");
        scanf("%d", &guess);
        if (guess == random)
        {
            printf("\n You have guessed correctly");
            return;

        }
        else if (guess < 0 || guess >20)
       printf("invalid number \n");
       else if(random > guess)
            printf("sorry %d is wrong. My number is greater than that", guess);

       else if (random < guess)
       printf("sorry %d is wrong. My number is less than that", guess);



    }
    printf("\n you have had 5 tries. the correct number was %d", random);
    return 0;
}
