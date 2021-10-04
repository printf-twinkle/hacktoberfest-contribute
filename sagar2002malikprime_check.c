# include<stdio.h>

int main()
{
    int num,check=0;
    printf("Enter the number to check: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if (num%i == 0)
        {
            check++;
        }
    }
    if(check==2)
    printf("Prime Number");
    else
    printf("Not a Prime Number");
    return 0;
}
