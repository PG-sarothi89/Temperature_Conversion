#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Which Temperature conversion do you want to perform?\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");

    int choice;
    scanf("%d", &choice);

    float T, NewT;

    if (choice == 1)
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &T);
        NewT = (T * 9 / 5) + 32;
        printf("%.2f Celsius is %.2f Fahrenheit\n", T, NewT);
    }
    else if (choice == 2)
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &T);
        NewT = (T - 32) * 5 / 9;
        printf("%.2f Fahrenheit is %.2f Celsius\n", T, NewT);
    }
    else
    {
        printf("Error. Select the Right option\n");
    }

    return 0;
}