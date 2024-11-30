#include <stdio.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
float modulus(int a, int b);

int main() 
{
    int choice;
    float num1, num2;

    do {
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) 
        {
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);
        }

        switch (choice) 
        {
            case 1:
                printf("Addition of %.2f and %.2f is %.2f\n", num1, num2, add(num1, num2));
                break;
            case 2:
                printf("Subtraction of %.2f and %.2f is %.2f\n", num1, num2, subtract(num1, num2));
                break;
            case 3:
                printf("Multiplication of %.2f and %.2f is %.2f\n", num1, num2, multiply(num1, num2));
                break;
            case 4:
                if (num2 != 0) {
                    printf("Division of %.2f and %.2f is %.2f\n", num1, num2, divide(num1, num2));
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                printf("Modulus of %d and %d is %.2f\n", (int)num1, (int)num2, modulus((int)num1, (int)num2));
                break;
            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}

float add(float a, float b) 
{
    return a + b;
}

float subtract(float a, float b) 
{
    return a - b;
}

float multiply(float a, float b) 
{
    return a * b;
}

float divide(float a, float b) 
{
    return a / b;
}

float modulus(int a, int b) 
{
    return a % b;
}