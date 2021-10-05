// C program to find digits of an integer
#include<stdio.h>
void main()
{
    int num,count=0;
    printf("Enter an integer :: ");
    scanf("%d",&num);
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    printf("The digits in the given integer is :: %d\n",count);
}
