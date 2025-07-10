// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int n; int ans;
    printf("Welcome to Adrija's book quiz!");
    printf("\n");
    printf("You will be given a name, followed by the names of authors or poets, you have to guess the right one.");
    printf("\n");
    printf("Enter 1 to start! 0 to stop:  ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("You have successfully exited the game.");
    }
    else
    {
    do
    {
        
        char A[7][20]={"Wild nights","1984", "sonnet 116","Ode to Autumn", "Tithonus","The Road not taken","And still I rise"};
        printf("Your question is: ");
        int size=sizeof(A)/sizeof(A[0]);
        srand(time(NULL));
        int r=rand()%size;
        printf(A[r]);
        printf("\n");
        printf("Option 1: George Orwell");
        printf("\n");
        printf("Option 2: John Keats");
        printf("\n");
        printf("Option 3: Lord Tennyson");
        printf("\n");
        printf("Option 4: Emily Dickinson");
        printf("\n");
        printf("Option 5: Shakespeare");
        printf("\n");
        printf("Option 6: Maya Angelou");
        printf("\n");
        printf("Option 7: Robert Frost");
        printf("\n");
        printf("Enter your option please: ");
        scanf("%d", &ans);
        switch(r)
        {
            case 0:
            {
                if(ans==4)
                {
                    printf("That is correct!");
                }
                else
                {
                    printf("wrong! the correct answer is: ");
                    printf("4");
                }
                break;
            }
            case 1:
            {
                if(ans==1)
                {
                    printf("That is correct!");
                }
                else
                {
                    printf("wrong! the correct answer is: ");
                    printf("1");
                }
                break;
            }
            case 2:
            {
                if(ans==5)
                {
                    printf("That is correct!");
                }
                else
                {
                    printf("wrong! the correct answer is: ");
                    printf("5");
                }
                break;
            }
            case 3:
            {
                if(ans==2)
                {
                    printf("That is correct!");
                }
                else
                {
                    printf("wrong! the correct answer is: ");
                    printf("2");
                }
                break;
            }
            case 4:
            {
                if(ans==3)
                {
                    printf("That is correct!");
                }
                else
                {
                    printf("wrong! the correct answer is: ");
                    printf("3");
                }
                break;
            }
            case 5:
            {
                if(ans==7)
                {
                    printf("That is correct!");
                }
                else
                {
                    printf("wrong! the correct answer is: ");
                    printf("7");
                }
                break;
            }
            case 6:
            {
                if(ans==6)
                {
                    printf("That is correct!");
                }
                else
                {
                    printf("wrong! the correct answer is: ");
                    printf("6");
                }
                break;
            }
        }
        printf("\n");
        printf("would you like to play again? Enter 1 for yes, 0 for no: ");
        scanf("%d",&n);
    
    } while(n==1);
    }
    printf("You have successfully exited the game");
    
    return 0;
}