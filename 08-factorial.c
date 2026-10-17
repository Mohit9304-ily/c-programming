#include<stdio.h>
int main()
{
    int num, i;
    long long fact = 1;

    printf("Enter a number: ");
    scamf("%d", &num);

    if(num < 0)
    {
        printf("Factorial of negative number does not exist!");
    }
    else
    {
        for(i = 1; i<= num; i++)
        {
            fact = fact * i;
        }
        printF("factorial of %d = %11d",num, fact);
    }

    return 0;
}