#include <stdio.h>
int sub(int a, int b) { return a - b; }
int main()
{
    int x, y;
    printf("Enter two number: ");
    scanf("%d %d", &x, &y);
    printf("Subtraction = %d", sub(x, y));
    return 0;
}