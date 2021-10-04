#include <stdio.h>
int main()
{
    int i,v=1;
    int a = 1;
    
    for (i=2;i<=a/2;i++)
      {
          v = a%i;
      
          if(v==0)
            break;
      }
    if (v==0 || a==1)
      printf("%d is not prime number",a);
    else
      printf("%d is prime number",a);
}
