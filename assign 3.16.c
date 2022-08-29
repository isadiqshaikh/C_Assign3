#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your Character");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
        printf("Lowercase");
    else if(ch>='A'&&ch<='Z')
        printf("Uppercase");
    else if(ch>='1'&&ch<='9')
        printf("Digit");
    else
        printf("Special Character");
    return 0;

}
