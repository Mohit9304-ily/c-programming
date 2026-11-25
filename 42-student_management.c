#include <stdio.h>
struct Student
{
    int roll;
    char name[20];
    float cgpa;
};
int main()
{
    struct Student s[3];
    for(int i=0;i<3;i++)
    {
        printf("Roll Name CGPA: ");
        scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].cgpa);
    }
    printf("\n--- Studen Data ---\n");
    for(int i=0;i<3;i++)
    printf("%d %s %.2f\n",s[i].roll,s[i].name,s[i].cgpa);
    return 0;
}