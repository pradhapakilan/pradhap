#include<stdio.h>
#include<conio.h>
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=n;i<m;i++)
    {
        if(i%2==1)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}