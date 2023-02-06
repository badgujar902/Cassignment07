#include<stdio.h>
int main()
{
    int i,x,y,s=0;
    printf("Enter two number\n");
    scanf("%d %d",&x,&y);


    for(i=1;i<=x;i++)
    {
        if((x%i==0) && (y%i==0))
        {
           s=i;
        }



    }
    printf("HCF = %d",s);

    return 0;
}
