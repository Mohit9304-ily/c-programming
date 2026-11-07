#include <stdio.h>
int multioly(int a, int b)
{
    return a * b;
}

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = mutiply(num1, num2);
    printf("Multiplication = %d\n", result);

    return 0;
}