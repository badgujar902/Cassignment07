#include<stdio.h>
int main()
{
    int i,a=1,b=1,c,n;
    printf("Enter a number \n");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        c=a+b;

        a=b;

        b=c;
    }
    printf("%dth term of number is %d ",n,c);

    return 0;

}
