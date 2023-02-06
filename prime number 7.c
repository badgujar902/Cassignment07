#include<stdio.h>
int main()
{
    int i,j,a,b,flage;
    printf("Enter 2 number from you want to print prime number to \n");
    scanf("%d %d",&a,&b);

    for(i=a;i<=b;i++)
    {
        flage=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
               flage++;
            }

        }
        if(flage==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
