#include <stdio.h>
int main() 
{
    char op;
    float num1, num2, result;

    print("enter operator (+, -, *, /): ");
    scanf("%f %f", &num1, &num2);

    switch(op)
    {
        case '+':
            result = num1 + num2;
            printf("result = %.2f", result);
            break;
        case '-':
            result = num1 - num2;
            printf("result = %.2f", result);
            break;
        case '*':
            result = num1 * num2;
            printf("result = %.2f", result);
            break;
        case '/':
            if(num2 !=0)
                printf("Result = %.2f", num1 / num2);
            else
                print("Enter! Division by zero");
            break;
        default:
            printf("Invalid operator!");
    }

    return 0;
}
