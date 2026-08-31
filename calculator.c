/*
    Author: Jaydeep Ray
    Starting Date: 29-08-2026 
    Finishing Date: 01-09-2026
    Description: Smart Calculator.
*/

// Include necessaries
#include <stdio.h>
#include <math.h>

// main function
int main(void)
{
    int opt_num, res, opr1, opr2, opr;
    printf("\n %-40s %-40s %-40s", "1. Addition", "2. Substraction", "3. Multiplication");
    printf("\n %-40s %-40s %-40s", "4. Division", "5. Exponentiation", "6. Sqaure");
    printf("\n %-40s %-40s %-40s", "7. Log (base e)", "8. Log (base 10)", "9. Sine (angle in radians)");
    printf("\n %-40s %-40s", "10. Cosine (angle in radians)", "11. Tangent (angle in radians)");
    printf("\n Enter `-1` to exit.");
    printf("\n Enter operation number: ");
    scanf("%d", &opt_num);
    
    while (opt_num != -1)
    {
        if ((opt_num > 0) && (opt_num <= 5))
        {
            printf("\n Enter the first operand: ");
            scanf("%d", &opr1);
            printf("\n Enter the second operand: ");
            scanf("%d", &opr2);
        }
        else if ((opt_num > 5) && (opt_num <= 11))

        {
            printf("\n Enter the oprand: ");
            scanf("%d", &opr);
        }
        else
        printf("\n Wrong operation number provided.");
        
        switch (opt_num)
        {
            case 1:
                res = opr1 + opr2;
                printf("\n %d + %d = %d", opr1, opr2, res);
                break;
            case 2:
                res = opr1 - opr2;
                printf("\n %d - %d = %d", opr1, opr2, res);
                break;
            case 3:
                res = opr1 * opr2;
                printf("\n %d * %d = %d", opr1, opr2, res);
                break;
            case 4:
                res = opr1 / opr2;
                printf("\n %d / %d = %d", opr1, opr2, res);
                break;
            case 5:
                res = pow(opr1, opr2);
                printf("\n %d raised to the power %d is: %d", opr1, opr2, res);
                break;
            case 6:
                res = opr * opr;
                printf("\n Sqaure of %d is: %d", opr, res);
                break;
            case 7:
                res = log(opr);
                printf("\n Log of %d to the base e is: %d", opr, res);
                break;
            case 8:
                res = log10(opr);
                printf("\n Log of %d to the base 10 is: %d", opr, res);
                break;
            case 9:
                res = sin(opr);
                printf("\n Sine of %d radian is: %d", opr, res);
                break;
            case 10:
                res = cos(opr);
                printf("\n Cosine of %d radian is: %d", opr, res);
                break;
            case 11:
                res = tan(opr);
                printf("\n Tangent of %d radian is: %d", opr, res);
                break;
            default:
            printf("\n Wrong operation number is entered.");
        }
        printf("\n Press enter to continue...");
        getchar();
        getchar();
        printf("\033[2J\033[3J\033[H");
        fflush(stdout);
        printf("\n %-40s %-40s %-40s", "1. Addition", "2. Substraction", "3. Multiplication");
        printf("\n %-40s %-40s %-40s", "4. Division", "5. Exponentiation", "6. Sqaure");
        printf("\n %-40s %-40s %-40s", "7. Log (base e)", "8. Log (base 10)", "9. Sine (angle in radians)");
        printf("\n %-40s %-40s", "10. Cosine (angle in radians)", "11. Tangent (angle in radians)");
        printf("\n Enter `-1` to exit.");
        printf("\n Enter operation number: ");
        scanf("%d", &opt_num);
    }
    return 0;
}