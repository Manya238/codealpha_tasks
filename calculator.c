#include <stdio.h>

int main()
{
    int choice, again;
    float num1, num2, result;

    do
    {
        printf("\n========== SIMPLE CALCULATOR ==========\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");

        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);

        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        switch(choice)
        {
            case 1:
                result = num1 + num2;
                printf("\nResult = %.2f\n", result);
                break;

            case 2:
                result = num1 - num2;
                printf("\nResult = %.2f\n", result);
                break;

            case 3:
                result = num1 * num2;
                printf("\nResult = %.2f\n", result);
                break;

            case 4:
                if(num2 == 0)
                {
                    printf("\nError! Division by zero is not possible.\n");
                }
                else
                {
                    result = num1 / num2;
                    printf("\nResult = %.2f\n", result);
                }
                break;

            default:
                printf("\nInvalid Choice! Please select between 1 and 4.\n");
        }

        printf("\nDo you want to perform another calculation?\n");
        printf("Press 1 for Yes or 0 for No: ");
        scanf("%d", &again);

    } while(again == 1);

    printf("\nThank you for using the Simple Calculator!\n");

    return 0;
}