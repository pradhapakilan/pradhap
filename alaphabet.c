#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c<='z' && c>='a')
    {
        printf("alaphabet");
    }
    else
    {
        printf("not alaphabet");
    }
    return 0;
}