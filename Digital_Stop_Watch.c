#include<stdio.h>
#include<unistd.h>


int main()
{
    int Houre, Minute, Second ; 
    printf("Enter target time (HH MM SS): ");
    scanf("%d %d %d" , &Houre, &Minute, &Second) ; 
    
    
    int h=0,m=0,s=0 ;    
     

    while (1)
    {
        printf("\n\n######### STOP WATCH ############\n\n\n") ; 
        printf("  %.2d : %.2d : %.2d\n" , h,m,s) ; 
        printf("\n\n#################################\n\n\n") ;


        
        if(h==Houre && m == Minute && s == Second)
        {
            printf("\n\n Time's up! \n\n") ;
            break;
        }
        

        s++ ; 
        sleep(1) ; 

        if(s == 60)
        {
            m++ ; 
            s = 0 ; 
        }
        if(m == 60) 
        {
            h++ ; 
            m = 0 ; 
        }
    }
    
    

}