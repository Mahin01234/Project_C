#include<stdio.h>
int main()
{
    int row, col  ; 
    printf("Enter the row and col : ") ; 
    scanf("%d %d" , &row, &col) ; 




    int A[row][col] , B[row][col] , Sum[row][col] ; 




    printf("\nEnter eliments of matrix A : \n") ; 
    {
        for(int i=0 ; i<row ; i++) 
        {
            for(int j=0 ; j<col ; j++)
            {
                printf("A[%d][%d] : " , i , j);
                {
                    scanf("%d" , &A[i][j]) ; 
                }
            }
        }
    }




    


    printf("\nEnter elements of matrix of B : \n") ; 
    {
        for(int i=0; i<row ; i++) 
        {
            for(int j=0 ; j<col ; j++) 
            {
                printf("B[%d][%d] : "  , i, j) ; 
                {
                    scanf("%d" , &B[i][j]) ; 
                }
            }
        }   
    }








    for(int i=0 ; i<row ; i++) 
    {
        for(int j=0 ; j<col ; j++) 
        {
            Sum[i][j] = A[i][j] + B[i][j] ;
        }
    }


 





    printf("\nSum of matrix A and B : \n") ; 
    {
        for(int i=0 ; i<row; i++) 
        {
            for(int j=0; j<col ; j++) 
            {
                printf("%d " , Sum[i][j]) ; 
            }
            printf("\n") ; 
        }
    }
    


    

    return 0 ; 



}