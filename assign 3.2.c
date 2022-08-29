#include<stdio.h>
int main()
{
    int a;
    printf("Enter your number");
    scanf("%d",&a);
    if(a%5==0)
        printf("Devisible by 5");
    else
        printf("Not devisible");
    return 0;
}
