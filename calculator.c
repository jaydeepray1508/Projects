#include <stdio.h>
#include <math.h>


void display_menu(void)
{
    printf("\033[2J\033[3J\033[H");
    printf("\n %-40s %-40s %-40s", "1. Addition", "2. Subtraction", "3. Multiplication");
    printf("\n %-40s %-40s %-40s", "4. Division", "5. Exponentiation", "6. Square Root");
    printf("\n %-40s %-40s %-40s", "7. Log (base e)", "8. Log (base 10)", "9. Sine (angle in radian)");
    printf("\n %-40s %-40s", "10. Cosine (angle in radian)", "11. Tangent (angle in radian)");
    printf("\n Enter `-1` to exit.");
}

int get_option(void)
{
    int option;
    printf("\n Enter operation number: ");
    scanf("%d", &option);
    return option;
}

void invalid_input(void)
{
    char clear[50];
    printf("\n Invalid input provided.");
    scanf("%s", *&clear);
}

int main(void)
{
    int option, scanned = 0;
    double second_operand, first_operand;
    double result;
    display_menu();
    option = get_option();
    while (option != -1)
    {
        if ((option > 0) && (option <= 5))
        {
            printf("\n Enter the first operand: ");
            scanned += scanf("%lf", &first_operand);
            printf("\n Enter the second operand: ");
            scanned += scanf("%lf", &second_operand);
            if (scanned != 2)
                invalid_input();
        }
        else if ((option > 5) && (option <= 11))

        {
            printf("\n Enter the operand: ");
            scanned += scanf("%lf", &first_operand);
            if (scanned != 1)
                invalid_input();
        }
        else
        {
            printf("\n Wrong operation number provided.");
            display_menu();
            option = get_option();
            continue;
        }

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
                if (second_operand == 0)
                    printf("\n You can't divide by 0");
                    break;
                result = first_operand / second_operand;
                printf("\n %g / %g = %g", first_operand, second_operand, result);
                break;
            case 5:
                result = pow(first_operand, second_operand);
                printf("\n %g raised to the power %g is: %g", first_operand, second_operand, result);
                break;
            case 6:
                result = sqrt(first_operand);
                printf("\n Square root of %g is: %g", first_operand, result);
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
                printf("\n Sine of %g radian: %g", first_operand, result);
                break;
            case 10:
                result = cos(first_operand);
                printf("\n Cosine of %g radian: %g", first_operand, result);
                break;
            case 11:
                result = tan(first_operand);
                printf("\n Tangent of %g radian: %g", first_operand, result);
                break;
        }
        printf("\n Press enter to continue...");
        getchar();
        getchar();
        display_menu();
        option = get_option();
    }
    return 0;
}