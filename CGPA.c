#include <stdio.h>
#include <stdlib.h>

void CalculateGPA()
{
    int num_of_sub;
    double credits[num_of_sub];
    double Ponits[num_of_sub];
    double sum = 0;
    double total;
    double total_credits = 0;
    system("cls");
    printf("------------------------------------------------\n");
    printf("|                                              |");
    printf("                      GPA                       ");
    printf("Enter the subject : ");
    scanf("%d", &num_of_sub);
    printf("\n");
    for (int i = 1; i <= num_of_sub; i++)
    {
        printf("Enter Credits of Sunject : %d", i);
        scanf("%lf", &credits[i]);
        printf("Enter point of the Subject: \n");
        scanf("%lf", &Ponits[i]);
        printf("-----------------------------------------\n");
    }

    for (int i = 0; i <= num_of_sub; i++)
    {
        total = credits[i] * Ponits[i];
        sum = sum + total;
    }

    for (int i = 1; i <= num_of_sub; i++)
    {
        total_credits = total_credits + credits[i];
    }

    printf("\n\n");
    printf("Total Points: %lf", sum);
    printf("\n");
    printf("Total Credits: %lf", total_credits);
    printf("\n");
    printf("Total GOA: %lf", sum / total_credits);
    printf("\n");

    printf("\nPress any key go to back to main menu...");
    return;
}
   

void CalculateCGPA()
{
    int num_of_sems;
    system("cls");
    printf("------------------------------------------------\n");
    printf("|                                              |\n");
    printf("                      GPA                       \n");
    printf("Enter the semester : ");
    scanf("%d", &num_of_sems);

    double semester[num_of_sems];
    double sem_total = 0;

    
    for (int i = 0; i < num_of_sems; i++)
    {
        printf("Enter the Semester %d GPA: ", i + 1);
        scanf("%lf", &semester[i]);
    }

    for (int i = 0; i < num_of_sems; i++)
    {
        sem_total = sem_total + semester[i];
    }

    printf("\nYour CGPA : %.2lf\n", sem_total / num_of_sems);

    printf("\nPress Enter to go back to main menu...");
    while (getchar() != '\n');
    getchar();
    return;
}

   

void instruction()
{
    system("cls");
    printf("\n\n");
    printf("How to Calculate GPA and CGPA: \n");
    printf("------------------------------\n\n");
    printf("GPA = sum (credit*point) / total credits\n");
    printf("CGPA = sum of GPA / number of semester\n");
    printf("\n\n");
    printf("Grade - Point table : \n");
    printf("----------------------------------------------\n");
    printf("\tGrade \t\t 40 Scale\n");
    printf("\tA+ \t\t 4.0 \n");
    printf("\tA \t\t 4.0 \n");
    printf("\tA- \t\t 4.0 \n");
    printf("\tB+ \t\t 4.0 \n");
    printf("\tB \t\t 4.0 \n");
    printf("\tB- \t\t 4.0 \n");
    printf("\tC+ \t\t 4.0 \n");
    printf("\tC \t\t 4.0 \n");
    printf("\tC- \t\t 4.0 \n");
    printf("\tD+ \t\t 4.0 \n");
    printf("\tD \t\t 4.0 \n");
    printf("\tD- \t\t 4.0 \n");
    printf("\tF \t\t 4.0 \n");

    printf("\n press any key to go back to Main memu...");
    getchar() ; 
    return;
}
int main()
{
    do
    {
        system("cls");
        printf("------------------------------------------------\n");
        printf("|                                              |\n");
        printf("                      GPA                       \n");
        printf("1. Calculate GPA\n");
        printf("2. Calculate CGPA\n");
        printf("4. Exit\n");
        printf("3. How to Calculate GPA?\n");
        printf("Enter the select option: ");
        char op = 0;
        scanf(" %c", &op);




        if(op == '1') 
        CalculateGPA() ; 
        else if (op == '2')
        CalculateCGPA() ; 
        else if (op == '3') 
        instruction() ; 
        exit(0) ; 
        

    } while (1);


    return 0 ; 
}