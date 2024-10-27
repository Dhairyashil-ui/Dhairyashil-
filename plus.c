#include <cs50.h>
#include <stdio.h>

float add(float a, float b);


float subtract(float a, float b);
float multiply(float a, float b);


float divide(float a, float b);

int main(void) {
    float num1 = get_float("Enter first number: ");
    float num2 = get_float("Enter second number: ");

    char operation = get_char("Choose an operation (+, -, *, /): ");

    float result;

    switch (operation)
    {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;





        case '/':
            if (num2 != 0)
            {
                result = divide(num1, num2);



            }
            else
            {
                printf("pleasr enter a valid number\n");

                return 1;
            }
            break;
        default:
            printf("Invalid number.\n");
            return 1;
    }
    printf("Result: %.2f\n", result);
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
