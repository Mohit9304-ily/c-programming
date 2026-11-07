#include <stdio.h>
float divide(int a, int b)
{
    return (float)a / b;
}
int main()
{
    int x, y;
    scanf("%d", &x, &y);
    printf("Division = %.2f", divide(x,y));
    return 0;
}