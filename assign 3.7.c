#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number : ");
    scanf("%d %d %d",&a,&b,&c);
    int disc =b*b-4*a*c;
    if(disc>0)
        printf("Real and distict");
    else if(disc<0)
        printf("Real and equal");
    else
        printf("imaginary");
}
