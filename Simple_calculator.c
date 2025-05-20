#include <stdio.h>
#include <math.h>

double division(double, double);
double modulus(int, int);

void print_menu();
int main()
{
    int choice;
    double num1, num2, result;

    while (1)
    {
        print_menu();
        scanf("%d", &choice);

        if (choice == 7)
        {
            break;
        }

        if(choice < 1 || choice > 7) 
        {
            fprintf(stderr, "Invalid Menu Choice.") ; 
            continue;
        }
        printf("Please enter the num1:");
        scanf("%lf", &num1);
        printf("Please enter the num2: ");
        scanf("%lf", &num2);

        switch (choice)
        {
        case 1: // Add
            result = num1 + num2;
            break;
        case 2: // Sub
            result = num1 - num2;
            break;
        case 3: // Mul
            result = num1 * num2;
            break;
        case 4: // Div
            result = division(num1, num2);
            break;
        case 5: // mod
            result = modulus(num1,num2);
            break;
        case 6: // Pow
            result = pow(num1, num2);
            break;
       
        }

        if (!isnan(result))
        {
            printf("\nResult of operation is : %.2f", result);
        }
    }

    return 0;
}

double division(double a, double b)
{
    if (b == 0)
    {
        fprintf(stderr, "Invalid Argument for Division");
        return NAN;
    }
    else
    {
        return a / b;
    }
}

double modulus(int a, int b)
{
    if (b == 0)
    {
        fprintf(stderr, "Invalid Argument for Modulus");
        return 0 ;
    }
    else
    {
        return a % b;
    }
}

void print_menu()
{
    printf("\n\n---------------------------------------------") ; 
    printf("\nWelcome to Simple Calculator\n");
    printf("\nChoose one of the options:");
    printf("\n1. Add");
    printf("\n2. Sub");
    printf("\n3. Mul");
    printf("\n4. Divide");
    printf("\n5. modulus");
    printf("\n6. Power");
    printf("\n7. Exit");
    printf("\nNow, Enter The Choice: ");
}