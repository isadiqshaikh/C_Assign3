#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter marks of a-");
    scanf("%d",&a);
     printf("Enter marks of b-");
    scanf("%d",&b);
     printf("Enter marks of c-");
    scanf("%d",&c);
     printf("Enter marks of d-");
    scanf("%d",&d);
     printf("Enter marks of e-");
    scanf("%d",&e);


    if(a>33&&b>33&&c>33&&d>33&&e>33)
        printf("Pass");
    else
        printf("Fail");
}
