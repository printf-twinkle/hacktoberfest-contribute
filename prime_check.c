/*A program in c to check if a number is prime or not.*/
#include <stdio.h>

/*Function declaration*/
void check(int Number)
{
    int i,count=0;
        for (i = 2; i <= Number/2; i++)
        {
            if(Number%i == 0)
            {
            count++;
        	break;
            }	
        }
        if(count == 0 && Number != 1 )
        {
           	printf("\n %d is a Prime Number", Number);
        }
        else
        {
           	printf("\n %d is Not a Prime Number", Number);
        }
}


/*The driver code*/
int main(void)
{
    int Number; 
  
   /*Taking the input from the user*/
    printf("\nPlease Enter any number to Check for Prime \n");
    scanf("%d", &Number);
 
    /*Function call*/
    check(Number);    
          
  return 0;
}
