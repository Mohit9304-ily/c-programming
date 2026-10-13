#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number:");
    scanf("%d", &num);

    if(num>0){
       printf("%d is Positive number\n",num);
}
else if(num<0){
      printf("%d is Negative number\n",num);
}
else{
    printf("Number is Zero\n");
}
return 0;
}