#include<stdio.h>
int main()
{
    int row1,col1,row2,col2 ; 



    printf("Enter the row and col for matrix A : ") ; 
    scanf("%d %d" , &row1 , &col1) ; 


    
    printf("Enter the row and col for matrix B : ") ;  
    scanf("%d %d" , &row2 , &col2) ; 





    if(col1 != row2) 
    {
        printf("Multiplication matrix is not possible\n") ; 
        return 0 ; 
    }


     

    int A[row1][col1] , B[row2][col2] , Result[row1][col2] ;
    
    


    printf("\nEnter element matrix of A : \n") ; 
    {
        for(int i=0 ; i<row1; i++) 
        {
            for(int j=0 ; j<col1 ; j++) 
            {
                printf("A[%d][%d] : " , i,j) ; 
                {
                    scanf("%d" , &A[i][j]) ; 
                }
            }
        }
    }







   printf("\nEnter element of matrix B : \n") ; 
   {
        for(int i=0 ; i<row2 ; i++) 
        {
            for(int j=0; j<col2 ; j++) 
            {
                printf("B[%d][%d] : " , i, j) ; 
                {
                    scanf("%d" , &B[i][j]) ; 
                }
            }
        }
   }






   for(int i=0 ; i<row1 ; i++) 
   {
       for(int j=0 ; j<col2 ; j++) 
       {
            Result[i][j] =  0 ;  
       }
   }





   for(int i=0 ; i<row1 ; i++) 
   {
       for(int j=0 ; j<col2 ; j++) 
       {
           for(int k = 0 ; k<col1 ; k++) 
           {
                Result[i][j] = Result[i][j] + A[i][k] * B[k][j] ; 
           }
       }
   }






   printf("Result of matrix is multiplication : \n") ;
   {
       for(int i=0 ; i<row1 ; i++) 
       {
            for(int j=0 ; j<col2 ; j++) 
            {
                printf("%d " , Result[i][j]) ;  
            }
            printf("\n") ;     
       }
   }



   return 0 ; 




}