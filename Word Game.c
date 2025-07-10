#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() 
{
    int c1;
    char guess[50];  // buffer for the guessed word

    printf("Rules");
    printf("\n");
    printf("1) Roll the dice, if the number is even, Player 1 plays, if it is odd, Player 2 plays.");
    printf("\n");
    printf("2) Both players will be given the first letter of the word.");
    printf("\n");
    printf("3) Players may take further clues. Clues will be synonyms of the word.");
    printf("\n");

    char *words[] = {"enigma", "elixir", "petrichor", "epiphany", "ephemeral"};
    int size = sizeof(words) / sizeof(words[0]);
    int t;
    do
    {

    srand(time(NULL));
    int r2 = rand() % size;
    char *target = words[r2];  // randomly selected word

    // Print first letter
    printf("\nThe first letter of the word is: %c\n", target[0]);

    // Print synonym clue
    printf("A synonym of the word is: ");
    if (strcmp(target, "enigma") == 0)
        printf("a mystery");
    else if (strcmp(target, "elixir") == 0)
        printf("a potion");
    else if (strcmp(target, "petrichor") == 0)
        printf("the smell of rain");
    else if (strcmp(target, "epiphany") == 0)
        printf("realization");
    else
        printf("short lived");
    printf("\n\n");
    
    int flag = 0;
    while (!flag) {
        printf("Please press 1 to roll the dice: ");
        scanf("%d", &c1);

        int dice = rand() % 6 + 1;  // roll a dice (1 to 6)
        printf("Dice value: %d\n", dice);

        if (dice % 2 == 0)
            printf("Player 1 will guess the word.\n");
        else
            printf("Player 2 will guess the word.\n");

        printf("Please enter your guess: ");
        scanf("%s", guess);

        if (strcmp(guess, target) == 0) {
            printf("🎉 Congratulations! You got it!\n");
            flag = 1;
            printf("\n");
            printf("If you want to play again, enter 1, else enter 0: ");
            scanf("%d",&t);
        } else {
            printf("❌ Oops! You're wrong, roll again!\n");
        }
    }
    }while(t==1);

    return 0;
}
