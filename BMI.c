#include<stdio.h>
#include<conio.h>

int main()
{
    float Weight = 0.0 , bmi = 0 , hight = 0.0 ; 


    printf("Enter the Weight : ") ; 
    scanf("%f" , &Weight) ; 
    printf("Enter the Hight : ") ; 
    scanf("%f" , &hight) ; 


    bmi = Weight * 703 / (hight * hight) ; 



    if(bmi <= 18.5) 
    {
        printf("Your bmi is : %f underwight\n" , bmi) ; 
    }
    else if (bmi <= 24.9)
    {
        printf("Your bmi is : %f normal\n" , bmi) ; 
    }
    else if(bmi <= 29.9)
    {
        printf("Your bmi is : %f obese\n" , bmi) ; 
    }



    return 0 ; 

    
    
}