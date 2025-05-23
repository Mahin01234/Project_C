#include <stdio.h>
#include <conio.h>


int main()
{
    int upper = 0, lower = 0, number = 0, special = 0, i = 0, j = 0 ;
    char ch , pass[21] ;



    printf("Enter your password : ");



    while (1)
    {
        ch = getch() ; 

        if(ch == 13)
        {
            break;
        }
        else if (ch == 8)
        {
        
            if (i > 0)
            {
                i-- ; 
                printf("\b \b") ; 
            }
        
        }
        else if (i < 20)
        {
            pass[i++] = ch ; 
            printf("*") ; 
        }
    }    
    


    
    for (int j = 0; j < i ; j++)
    {




        int C = (int)pass[j];




        if (C >= 65 && C <= 90)
        {
            upper = 1;
        }

        else if (C >= 97 && C <= 122)
        {
            lower = 1;
        }

        else if (C >= 48 && C <= 57)
        {
            number = 1;
        }

        else if (C >= 33 && C <= 47)
        {
            special = 1;
        }

        else if (C >= 58 && C <= 64)
        {
            special = 1;
        }

        else if (C >= 91 && C <= 96)
        {
            special = 1;
        }

        else if (C >= 123 && C <= 126)
        {
            special = 1;
        }
    }



    printf("\n\nPassword analysis : ") ;



    if (number != 1)
    {
        printf("\nNo number \n");
    }

    if (upper != 1)
    {
        printf("\nNo Appaercase Alphabet\n");
    }

    if (lower != 1)
    {
        printf("\nNo Lowercase Alphabet\n");
    }

    if (special != 1)
    {
        printf("\nNo Special Character\n");
    }




    int score = upper + lower + number + special ; 
    


    if(i < 6) 
    {
        printf("\nVery Very Week\n") ; 
    }
    else if (score == 4)
    {
        printf("Strong\n") ; 
    }
    else if (score == 3)
    {
        printf("Medium\n") ; 
    }
    else if(score == 2) 
    {
        printf("Weak\n") ; 
    }
    else
    {
        printf("Very Weak\n") ;
    }
    
    

    return 0;
}