// C program to check an integer is palindrome or not
#include<stdio.h>
void main()
{
    int num,n,rev=0;
    printf("Enter an integer :: ");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        rev=rev*10+(n%10);
        n=n/10;
    }
    if(num==rev)
    {
        printf("The given integer is palindrome\n");
    }
    else
    {
        printf("The given integer is not palindrome\n");
    }
}
