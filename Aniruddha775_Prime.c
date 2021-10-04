#include <stdio.h> 

int main() {
  int n, i = 1, c = 0;
  printf("Enter any number ");
  scanf("%d", &n);
  for ( ; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }
  if (c == 2) {
  printf("It is a Prime number");
  }
  else {
  printf("It is not a Prime number");
  }
  return 0;    
}
