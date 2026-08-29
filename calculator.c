/*
    Author: Jaydeep Ray
    Date: 22-08-2026
    Description: Simple Calculator.
*/

// Include necessaries
#include <stdio.h>
#include <math.h>

// main function
int main(void)
{
    int opt_num, num1, num2, res;
    printf("\n 1. Addition \n 2. Substraction \n 3. Multiplication \n 4. Division \n 5. Exponentiation");
    printf("\n Enter operation number: ");
    scanf("%d", &opt_num);
    printf("\n Enter the first number: ");
    scanf("%d", &num1);
    printf("\n Enter the second number: ");
    scanf("%d", &num2);

    switch (opt_num)
    {
        case 1:
            res = num1 + num2;
            printf("\n %d + %d = %d", num1, num2, res);
            break;
        case 2:
            res = num1 - num2;
            printf("\n %d - %d = %d", num1, num2, res);
            break;
        case 3:
            res = num1 * num2;
            printf("\n %d * %d = %d", num1, num2, res);
            break;
        case 4:
            res = num1 / num2;
            printf("\n %d / %d = %d", num1, num2, res);
            break;
        case 5:
            res = pow(num1, num2);
            printf("\n %d raised to the power %d is: %d", num1, num2, res);
            break;
        default:
            printf("\n Wrong operation number is entered.");
    }
    return 0;
}