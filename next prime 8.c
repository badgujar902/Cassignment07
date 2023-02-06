#include<stdio.h>
int main()
{
    int i,j,flage=0,n;

    printf("Enter number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
      n=n+i;
      for(j=2;j<n+i;j++)
      {
          if(n%j==0)
          {
              flage=1;
          }
      }
       if(flage==0)
    {
        printf("%d",n);
    }

    }

    return 0;
}
