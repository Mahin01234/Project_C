#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int random, guess ; 
     int number_of_guess = 0 ; 
     srand(time(NULL)) ; 
    printf("Welcome to the world of Guessing number\n") ; 
    random = rand() % 100 + 1 ;  //Generating between 0 to 100
    
    do
    {
        printf("\nPlease enter your Guess between (1 to 100) : ") ; 
        scanf("%d" , &guess) ; 
        number_of_guess++ ; 

        if(guess < random) 
        {
            printf("Guess a largest number : \n") ; 
        }
        else if(guess > random) 
        {
            printf("Guess a smallest number : \n") ; 
        }
        else
        {
            printf("\nYou have successfully guess the number in %d attempts" , number_of_guess) ; 
    
        }
    } while (guess != random);
    

    printf("\nBye Bye Thanks for Playing.") ; 
    printf("\nDeveloped by: Mahin") ; 
}