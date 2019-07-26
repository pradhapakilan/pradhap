#include<stdio.h>
#include<conio.h>
int main()
{
    int n,temp=0,dup=0;
    scanf("%d",&n);
    while(n>0)
    {
        temp=n%10;
        n=n/10;
        dup=dup*10+temp;
        
    }
    printf("%d",dup);
    return 0;
}