#include<stdio.h>
int main()
{
    int i,a=1,b=1,c,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("%d term of fibonacci series is \n",n);
    printf("%d\n",a);
    printf("%d\n",b);
    for(i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;

        printf("%d\n",c);

    }
    return 0;
}
