#include <stdio.h>
#include <stdlib.h>

int main()
{
    int H = 0, M = 0, S = 0, h1 = 0, m1 = 0, s1 = 0;
    printf("Enter the time HH : MM : SS \n\n");
    scanf("%d %d %d", &H, &M, &S);

    printf("The Set Alam HH : MM : SS\n\n");
    scanf("%d %d %d", &h1, &m1, &s1);

    if (H < 24 && M < 60 && S < 60)
    {
    start:
        for (H = 0; H < 24; H++)
        {
            for (M = 0; M < 60; M++)
            {
                for (S = 0; S < 60; S++)
                {
                    system("CLS");
                    printf("CLOCK : %d : %d : %d", H, M, S);

                    if (H < 12)
                    {
                        printf("PM\n");
                    }
                    else
                    {
                        printf("AM\n");
                    }

                    if (H == h1 && M == m1 && S == s1)
                    {
                        printf("\a\a\a\a\a\a\a\a\a\a\a\a\a");
                        printf("ALAM RINGING!\n");
                    }

                    for (double i = 0; i < 99999999; i++)
                    {
                        i++;
                        i--;
                    }
                }
                S = 0;
            }
            M = 0;
        }
        H = 0;
        goto start;
    }
    else
    {
        printf("Enter the correct time HH : MM : SS\n");
    }


    return 0 ; 
}