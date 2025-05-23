#include<stdio.h>
int main()
{
    float cel, frh ; 
    printf("\n Enter the temperature in celcius :") ;
    scanf("%f" , &cel) ; 


    frh = (cel * 9 / 5) + 32 ; 


    printf("\n The temperature in celcius : %.2f", cel) ; 
    printf("\n The temperature in fahrenheit : %.2f" , frh) ; 

    printf("\n") ; 

    return 0 ; 
}