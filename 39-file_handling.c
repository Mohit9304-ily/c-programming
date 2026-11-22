#include <stdio.h>
int main()
{
    FILE *f = fopen("test.txt","w");
    fprint(f,"This is BTech CSE file");
    fclose(f);
    printf("File created");
    return 0;
}