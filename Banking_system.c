#include<stdio.h>
#include<string.h>

void Create_Account() ;
void Deposit_Money() ; 
void Withdraw_Money() ;
void Check_Blance() ; 
void Take_Loan() ;

const char* ACCOUNT_FILE = "account.adt" ; 

typedef struct 
{
    char name[100] ; 
    int account_number ; 
    float balance ; 
} Account ;

int main()
{
    
    while (1)
    {
        int choice ; 
        printf("\n\n$$$BANK MANAGEMENT SYSTEM\n") ;
        printf("\n1. Create Account") ; 
        printf("\n2. Deposit Money") ; 
        printf("\n3. Withdraw Money") ; 
        printf("\n4. Check Blance") ; 
        printf("\n5. Take Lone") ; 
        printf("\n6. Exit") ; 
        printf("\nEnter your choice: ") ; 
        scanf("%d" , &choice) ; 


        switch (choice)
        {
        case 1: 
            Create_Account() ; 
            break;
        case 2:
            Deposit_Money() ; 
            break;
        case 3:
            Withdraw_Money() ; 
            break;
        case 4:
            Check_Blance() ; 
            break ; 
        case 5:
            Take_Loan() ; 
            break;    
        case 6:
            printf("\nClosing The Bank. Thanks for your visit\n") ; 
            return 0 ; 
            break;
        default:
            printf("Invalid Choice") ; 
            break;
        }
    }
}


void Create_Account() 
{
    Account acc ; 

    FILE *file = fopen(ACCOUNT_FILE , "ab+") ;
    if(file == NULL) 
    {
        printf("\nUnable to open file !!") ;
        return ;  
    }
    
    char c ; 
    do
    {
        c = getchar() ; 
    } while (c != '\n' && c != EOF) ;
    
    

    printf("\nEnter your name: ") ; 
    fgets(acc.name , sizeof(acc.name) , stdin) ;  
    int index = strcspn(acc.name, "\n") ;
    acc.name[index] = '\0'; 
    printf("Enter your account number: ") ; 
    scanf("%d" , &acc.account_number) ; 
    acc.balance = 0.0 ;

    fwrite(&acc, sizeof(acc), 1, file) ; 
    fclose(file) ; 
    printf("\n") ; 
    printf("\nAccount created successfull") ; 


}
void Deposit_Money() 
{
    FILE *file = fopen(ACCOUNT_FILE, "rb+") ; 

    if(file == NULL) 
    {
        printf("Unable to open accoount file.") ; 
        return ; 
    }

    int account_number ; 
    float money ; 
    Account acc_read ; 
    printf("Enter your account number: ") ; 
    scanf("%d" , &account_number) ; 
    printf("Enter amount to deposite: ") ;
    scanf("%f" , &money) ; 
    
    
    while(fread(&acc_read, sizeof(acc_read), 1, file))  
    {
        if(acc_read.account_number == account_number) 
        {
            acc_read.balance += money ;
            fseek(file, -(long)sizeof(acc_read), SEEK_CUR) ; 
            fwrite(&acc_read, sizeof(acc_read) , 1, file) ; 
            fclose(file) ;  
            printf("Successfull deposite Tk. %.2f Now balance is Tk. %.2f" , money, acc_read.balance) ; 
            return; 
        }
    }
    fclose(file) ; 
    printf("Account no %d not found." , account_number) ; 
}
void Withdraw_Money() 
{
    FILE *file = fopen(ACCOUNT_FILE, "rb+") ;
    if(file == NULL) 
    {
        printf("\nUNible to open the account file.\n") ;
        return ; 
    }
    int acc_number ; 
    float money ; 
    Account acc_r ; 
    printf("Enter your account number: ") ; 
    scanf("%d" , &acc_number) ; 
    printf("Enter the amount to withdraw: ") ; 
    scanf("%f" , &money) ; 

    while (fread(&acc_r, sizeof(acc_r) , 1 , file))
    {
        if(acc_r.account_number == acc_number) 
        {
            if(acc_r.balance >= money)
            {
                acc_r.balance -= money ;
                fseek(file, -(long)sizeof(acc_r), SEEK_CUR) ; 
                fwrite(&acc_r, sizeof(acc_r) , 1, file) ; 
                printf("Successfull Withdraw Tk. %.2f\n" , money) ;  
                printf("Now balance is Tk. %.2f" ,acc_r.balance) ;

            }
            else
            {
                printf("Insufficient balance!") ; 
            }
            fclose(file) ; 
            return ; 
        }
    }
    fclose(file) ; 
    printf("Money count not be withdraw as the Account no &d was not found in records." , acc_r) ; 

}
void Check_Blance() 
{ 
 
    FILE* file = fopen(ACCOUNT_FILE, "ab+") ; 

    if(file == NULL) 
    {
        printf("\nUnable to open file !!") ;
        return ;  
    }

    int account_number ; 
    Account acc_read ; 
    printf("Enter your account number: ") ; 
    scanf("%d" , &account_number) ;


    while(fread(&acc_read, sizeof(acc_read), 1 , file))
    {
        if (acc_read.account_number == account_number) 
        {
            printf("Your account balance is %.2f TAKA\n" , acc_read.balance) ; 
            fclose(file) ; 
            return ; 
        }
        
    } 
    fclose(file) ; 
    printf("\nAccount No:%d was not found.\n" , account_number) ; 
}



void Take_Loan() 
{
    FILE *file = fopen(ACCOUNT_FILE, "rb+");
    if (file == NULL) 
    {
        printf("\nUnable to open the account file.\n");
        return;
    }

    int acc_number;
    float loan_amount;
    Account acc;

    printf("Enter your account number: ");
    scanf("%d", &acc_number);
    printf("Enter the loan amount you want: ");
    scanf("%f", &loan_amount);

    while (fread(&acc, sizeof(acc), 1, file)) 
    {
        if (acc.account_number == acc_number) 
        {
            acc.balance += loan_amount;
            fseek(file, -(long)sizeof(acc), SEEK_CUR);
            fwrite(&acc, sizeof(acc), 1, file);
            fclose(file);
            printf("Loan of Tk. %.2f granted successfully!\n", loan_amount);
            printf("Updated balance: Tk. %.2f\n", acc.balance);
            return;
        }
    }

    fclose(file);
    printf("Account number %d not found in records.\n", acc_number);
}
