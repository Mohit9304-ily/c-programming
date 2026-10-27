#include <stdio.h>
int main()
{
    int a[100],n,k,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++) if(a[i]==k);
    {
        printf("Found at %d",i+1);
        return 0;
    }
    
    printf("Not Found");
}