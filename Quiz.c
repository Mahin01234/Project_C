#include<stdio.h>
int main()
{
    int i ; 
    int ans1,ans2,ans3,ans4,ans5 ; 
    int point01,point02,point03,point04,point05 ; 
    int total1,total2,total3,total4,total5 ; 

    printf("  Welcome to the game\n\n") ; 
    printf(" Press 7 to Start the game\n")  ; 
    printf(" Press 0 to quit the game\n") ; 
    
    
    scanf("%d" , &i) ;
    



    if(i == 7) 
    {
        printf("The game has start\n\n") ; 
    }
    else if(i == 0)
    {
        printf("The game has end\n\n") ; 
    }
    else
    {
        printf("Invalied\n\n") ; 
    }





    if(i == 7) 
    {
        printf("1. Which one is the Search Engine in internet ??\n\n") ;
        printf("1. Google\n")  ;
        printf("2. Archie\n") ; 
        printf("3. Wais\n") ;
        printf("4. Altavistra\n") ;

        printf("Enter Your Ans: ") ; 
        scanf("%d" , &ans1) ; 

        if(ans1 == 1) 
        {
            printf("Correct Ans\n") ; 
            point01 = 5 ; 
            printf("Your total number %d point\n" , point01) ; 
        }
        else
        {
            printf("Wrong Ans\n") ; 
            point01 = 0 ;
            printf("Your total number %d point\n" , point01) ; 
        }




        printf("2. Bangladesh freedom fighter is - \n\n") ; 
        printf("1. 1971\n") ; 
        printf("2. 1969\n") ; 
        printf("3. 1952\n") ; 
        printf("4. 1947\n") ; 

        printf("Enter Your Ans : ") ; 
        scanf("%d" , &ans2) ; 

        if(ans2 == 1) 
        {
            printf("correct Ans\n") ; 
            point02 = 5 ; 
            printf("Your total number %d point\n" , point02) ; 
        }
        else
        {
            printf("Wrong Ans\n") ; 
            point02 = 0 ; 
            printf("Your total number %d point\n" , point02) ; 
        } 





        printf("3. The national animal of Bangladesh is the - \n\n") ; 
        printf("1. Lion\n") ; 
        printf("2. Dog\n") ; 
        printf("3. Royal Bengal Tiger\n") ; 
        printf("4. Cow\n") ; 

        printf("Enter Your Ans :") ; 
        scanf("%d" , &ans3) ; 

        if(ans3 == 3) 
        {
            printf("correct ans\n") ; 
            point03 = 5 ; 
            printf("Your total number %d point\n" , point03) ; 
        }
        else
        {
            printf("Wrong Ans\n") ; 
            point03 = 0 ; 
            printf("Your total number %d point\n" , point03) ; 
        }





        printf("4. The national baird of Bangladesh is the - \n\n") ; 
        printf("1. Oriental Magpie Robin\n") ; 
        printf("2. Black Francolin\n") ; 
        printf("3. White-cheeked Partridge\n") ; 
        printf("4. Mountain Bamboo-Partridge\n") ; 
        

        printf("Enter Your Ans :") ; 
        scanf("%d" , &ans4) ; 

        if(ans4 == 1) 
        {
            printf("correct ans\n") ; 
            point04 = 5 ; 
            printf("Your total number %d point\n" , point04) ; 
        }
        else
        {
            printf("Wrong Ans\n") ; 
            point04 = 0 ; 
            printf("Your total number %d point\n" , point04) ; 
        } 





        printf("5. The national fruit of Bangladesh is the - \n\n") ;
        printf("1. jackfruit\n") ; 
        printf("2. Banana\n") ; 
        printf("3. Jum\n") ; 
        printf("4. Mango\n") ; 


        printf("Enter Your Ans :") ; 
        scanf("%d" , &ans5) ; 

        if(ans5 == 1) 
        {
            printf("correct ans\n") ; 
            point05 = 5 ; 
            printf("Your total number %d point\n" , point05) ; 
        }
        else
        {
            printf("Wrong Ans\n") ; 
            point05 = 0 ; 
            printf("Your total number %d point\n" , point05) ; 
        }       


        int Total = point01+point02+point03+point04+point05 ; 
        printf("Your total number : %d out of 25\n" , Total) ;
    }


     
   return 0 ; 


}
