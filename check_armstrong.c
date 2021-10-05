// C program to check an integer is armstrong or not
#include<stdio.h>
#include<math.h>
void main()
{
    int num,n,count=0,res=0;
    printf("Enter an integer :: ");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    n=num;
    while(n!=0)
    {
        res=res+pow(n%10,count);
        n=n/10;
    }
    if(num==res)
    {
        printf("The given integer is armstrong\n");
    }
    else
    {
        printf("The given integer is not armstrong\n");
    }
}
