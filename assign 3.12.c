#include<stdio.h>
int main()
{
    int a;
    printf("Enter Your character for knowing upper and lower case ");
    scanf("%c",&a);
    if(('a'<=a) && (a<='z'))
        printf("Lowercase");
    else if(('A'<=a) && (a<='Z'))
         printf("Uppercase");
    else
        printf("Not a character");
}
