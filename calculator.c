/*
    Author: Jaydeep Ray
    Starting Date: 29-08-2026 
    Finishing Date: 01-09-2026
    Description: Smart Calculator.
*/

#include <stdio.h>
#include <math.h>

int option;

int menu(void)
{
    printf("\n %-40s %-40s %-40s", "1. Addition", "2. Subtraction", "3. Multiplication");
    printf("\n %-40s %-40s %-40s", "4. Division", "5. Exponentiation", "6. Square Root");
    printf("\n %-40s %-40s %-40s", "7. Log (base e)", "8. Log (base 10)", "9. Sine (angle in radians)");
    printf("\n %-40s %-40s", "10. Cosine (angle in radians)", "11. Tangent (angle in radians)");
    printf("\n Enter `-1` to exit.");
    printf("\n Enter operation number: ");
    scanf("%d", &option);
    return 0;
}

int main(void)
{
    double second_operand, first_operand;
    double result;
    menu();
    while (option != -1)
    {
        if ((option > 0) && (option <= 5))
        {
            printf("\n Enter the first operand: ");
            scanf("%lf", &first_operand);
            printf("\n Enter the second operand: ");
            scanf("%lf", &second_operand);
        }
        else if ((option > 5) && (option <= 11))

        {
            printf("\n Enter the operand: ");
            scanf("%lf", &first_operand);
        }
        else
        printf("\n Wrong operation number provided.");
        
        switch (option)
        {
            case 1:
                result = first_operand + second_operand;
                printf("\n %g + %g = %g", first_operand, second_operand, result);
                break;
            case 2:
                result = first_operand - second_operand;
                printf("\n %g - %g = %g", first_operand, second_operand, result);
                break;
            case 3:
                result = first_operand * second_operand;
                printf("\n %g * %g = %g", first_operand, second_operand, result);
                break;
            case 4:
                result = first_operand / second_operand;
                printf("\n %g / %g = %g", first_operand, second_operand, result);
                break;
            case 5:
                result = pow(first_operand, second_operand);
                printf("\n %g raised to the power %g is: %g", first_operand, second_operand, result);
                break;
            case 6:
                result = sqrt(first_operand);
                printf("\n Sqaure root of %g is: %g", first_operand, result);
                break;
            case 7:
                result = log(first_operand);
                printf("\n Log of %g to the base e is: %g", first_operand, result);
                break;
            case 8:
                result = log10(first_operand);
                printf("\n Log of %g to the base 10 is: %g", first_operand, result);
                break;
            case 9:
                result = sin(first_operand);
                printf("\n Sine of %g radian is: %g", first_operand, result);
                break;
            case 10:
                result = cos(first_operand);
                printf("\n Cosine of %g radian is: %g", first_operand, result);
                break;
            case 11:
                result = tan(first_operand);
                printf("\n Tangent of %g radian is: %g", first_operand, result);
                break;
        }
        printf("\n Press enter to continue...");
        getchar();
        getchar();
        printf("\033[2J\033[3J\033[H");
        fflush(stdout);
        menu();
    }
    return 0;
}