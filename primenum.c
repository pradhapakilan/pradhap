#include<stdio.h>
int main()
{
    int i,j,n,m;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
         
       if(c==2)
        {
            printf("%d ",i);
        }
    }
}