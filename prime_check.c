// A program in c to check if a number is prime or not.
#include <stdio.h>

// Function to check for prime
int isPrime(int num)
{
    for (int i = 2; i < num; ++i)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

// Driver code
int main(void)
{
    int num; 
  
    // Taking the input from the user
    printf("Enter a number to check for prime: ");
    scanf("%d", &num);
 
    // Check and print
    if (isPrime(num))
        printf("\n%d is a prime number.", num);
    else
        printf("\n%d is not a prime number.", num);
          
    return 0;
}
