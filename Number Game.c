// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int prime(int n)
{
    int flag=1;
    if(n==1|| n==0)
    {
        flag=0;
    }
    else
    {
        for(int i=2; i<=n/2; i++)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }
    }
    return flag;
}
int div3(int n)
{
    int flag=0;
    if(n%3==0)
    {
        flag=1;
    }
    return flag;
}
int digitCount(int n)
{
    int c=0;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    return c;
}
int even(int n)
{
    int flag=0;
    if(n%2==0)
    {
        flag=1;
    }
    return flag;
}
int main() 
{
    int n1; int n2; int c1; int c2; int c; int c3; int c4; int c5;
    printf("Would you like to play a game? Enter 1 for yes 0 for no: ");
    scanf("%d",&c3);
    printf("\n");
    do{
    printf("Enter a range: ");
    scanf("%d",&n1);
    scanf("%d",&n2);
    
    srand(time(NULL));
    int r=n1+rand()%(n2-n1+1);
    
    printf("If you want a clue, enter 1, else enter 0: ");
    scanf("%d",&c1);
    if(c1==1)
    {
        
        if(even(r)==1)
        {
            printf("The number is an even number");
            printf("\n");
        }
        else
        {
            printf("The number is an odd number");
            printf("\n");
        }
        printf("if you want another clue, enter 1, else enter 0: ");
        scanf("%d",&c2);
        if(c2==1)
        {
            if(prime(r)==1)
            {
                printf("The number is a prime number");
                printf("\n");
                printf("If you want a clue, enter 1, else enter 0: ");
                scanf("%d",&c4);
                if(c4==1)
                {
                    int l=digitCount(r);
                    printf("The number of digits is %d: ",l);
                     printf("Please enter your choice: ");
                scanf("%d",&c);
                if(c==r)
                {
                    printf("Congratulations! you got it!");
                    printf("\n");
                    printf("if you want to play again, enter 1, else enter 0: ");
                    scanf("%d", &c3);
                }
        
                else
                {
                    printf("oops! try again!");
                    printf("\n");
                    printf("Please enter your choice: ");
                    scanf("%d",&c);
                    if(c==r)
                    {
                        printf("Congratulations! you got it!");
                        printf("\n");
                    printf("if you want to play again, enter 1, else enter 0: ");
                    scanf("%d", &c3);
                    }
                    else
                    {
                        printf("Wrong! The number was: %d", r);
                        printf("\n");
                    printf("if you want to play again, enter 1, else enter 0: ");
                    scanf("%d", &c3);
                    }
                }
                    
                }
                else{
                printf("Please enter your choice: ");
                scanf("%d",&c);
                if(c==r)
                {
                    printf("Congratulations! you got it!");
                    printf("\n");
                    printf("if you want to play again, enter 1, else enter 0: ");
                    scanf("%d", &c3);
                }
        
                else
                {
                    printf("oops! try again!");
                    printf("\n");
                    printf("Please enter your choice: ");
                    scanf("%d",&c);
                    if(c==r)
                    {
                        printf("Congratulations! you got it!");
                        printf("\n");
                    printf("if you want to play again, enter 1, else enter 0: ");
                    scanf("%d", &c3);
                    }
                    else
                    {
                        printf("Wrong! The number was: %d", r);
                        printf("\n");
                    printf("if you want to play again, enter 1, else enter 0: ");
                    scanf("%d", &c3);
                    }
                }}
            }
            else
            {
                printf("The number is a composite number");
                printf("\n");
                printf("If you want a clue, enter 1, else enter 0: ");
                scanf("%d",&c4);
                if(c4==1)
                {
                    int l=digitCount(r);
                    printf("The number of digits is %d: ",l);
                    printf("\n");
                    printf("Please enter your choice: ");
                    scanf("%d",&c);
                    if(c==r)
                    {
                        printf("Congratulations! you got it!");
                        printf("\n");
                        printf("if you want to play again, enter 1, else enter 0: ");
                        scanf("%d", &c3);
                    }
                }
                else
                {
                printf("Please enter your choice: ");
                scanf("%d",&c);
                if(c==r)
                {
                    printf("Congratulations! you got it!");
                    printf("\n");
                    printf("if you want to play again, enter 1, else enter 0: ");
                    scanf("%d", &c3);
                }
                
                
                
            
                else
                {
                    printf("oops! try again!");
                    printf("\n");
                    printf("Please enter your choice: ");
                    scanf("%d",&c);
                    if(c==r)
                    {
                        printf("Congratulations! you got it!");
                        printf("\n");
                    printf("if you want to play again, enter 1, else enter 0: ");
                    scanf("%d", &c3);
                    }
                    else
                    {
                        printf("Wrong! The number was: %d", r);
                        printf("\n");
                    printf("if you want to play again, enter 1, else enter 0: ");
                    scanf("%d", &c3);
                    }
                }
            }}
        }
        else
        {
            printf("Please enter your choice: ");
        scanf("%d",&c);
        if(c==r)
        {
            printf("Congratulations! you got it!");
            printf("\n");
                    printf("if you want to play again, enter 1, else enter 0: ");
                    scanf("%d", &c3);
        }
        else
        {
            printf("oops! try again!");
            printf("\n");
            printf("Please enter your choice: ");
            scanf("%d",&c);
            if(c==r)
            {
                printf("Congratulations! you got it!");
                printf("\n");
                    printf("if you want to play again, enter 1, else enter 0: ");
                    scanf("%d", &c3);
            }
            else
            {
                printf("Wrong! The number was: %d", r);
                printf("\n");
                    printf("if you want to play again, enter 1, else enter 0: ");
                    scanf("%d", &c3);
            }
            
        }
        }
    }
    else
    {
        printf("Please enter your choice: ");
        scanf("%d",&c);
        if(c==r)
        {
            printf("Congratulations! you got it!");
            printf("\n");
                    printf("if you want to play again, enter 1, else enter 0: ");
                    scanf("%d", &c3);
        }
        else
        {
            printf("oops! try again!");
            printf("\n");
            printf("Please enter your choice: ");
            scanf("%d",&c);
            if(c==r)
            {
                printf("Congratulations! you got it!");
                printf("\n");
                    printf("if you want to play again, enter 1, else enter 0: ");
                    scanf("%d", &c3);
            }
            else
            {
                printf("Wrong! The number was: %d", r);
                printf("\n");
                    printf("if you want to play again, enter 1, else enter 0: ");
                    scanf("%d", &c3);
            }
            
        }
    }
    } while(c3==1);
    
    printf("Exited the game successfully");
    return 0;
    
}
