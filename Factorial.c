#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,f=1;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f*=i;
    }
    printf("Factorial:%d",f);
    return(0);
}
