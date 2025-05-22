#include<stdio.h>
int main()
{
    int Month, i=1, a, j , b;  
    printf("Enter the Month name of the year: ") ; 
    scanf("%d" , &Month) ; 


    switch (Month)
    {
    case 1:
        a = 4;
        b = 31 ; 
        break;
    case 2:
        a = 7;
        b = 28 ; 
        break;
    case 3:
        a = 7 ; 
        b = 31 ; 
        break;
    case 4:
        a = 3;
        b = 30 ; 
        break;
    case 5:
        a = 5 ; 
        b = 31 ; 
        break;
    case 6: 
        a = 1 ; 
        b = 30 ; 
        break;
    case 7:
        a = 3 ; 
        b = 31 ; 
        break;
    case 8:
        a = 6 ; 
        b = 31 ; 
        break;
    case 9:
        a = 2;
        b = 30 ; 
        break;
    case 10:
        a = 4 ; 
        b = 31 ; 
        break;
    case 11:
        a = 7 ; 
        b = 30 ; 
        break;
    case 12:
        a = 2;
        b = 31 ; 
        break; 
    default:
        printf("\nInvalid month\n") ; 
        break;
    }
    
    printf("\n\n") ; 
    printf("\t\t\t Month - %d - 2025\n\n" , Month) ; 
    printf("SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n\n") ; 
    


 
    for(int i=1 ; i<=a-1; i++) 
    {
        printf("\t") ; 
    }
    
    
    for(j=1 ; j<=b ; j++) 
    {
        printf("%d\t" , j) ; 
        
            if((j + a - 1) % 7 == 0 )
            {
                printf("\n") ; 
            } 
        
    }
    printf("\n") ;  


    return 0 ; 
}