#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a");
    scanf("%d",&a);
    printf("Enter the value of b");
    scanf("%d",&b);
    printf("Enter the value of c");
    scanf("%d",&c);
    if((a+b>c )&& (b+c>a) && (c+a>b))
        printf("Valid");
    else
        printf("Invalid");

}
