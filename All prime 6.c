#include<stdio.h>
int main()
{
    int i,j,flage;

    for(i=1;i<=100;i++)
    {
        flage=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
                    flage++;

        }
        if(flage==0 )
                printf("%d\n",i);
    }

    return 0;
}
