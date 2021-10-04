#include<stdio.h>  
int main(){    
int n,i,m=0,flag=0;    
printf("Enter the number to check prime:");    
scanf("%d",&n);    
m=n/2;    
for(i=2;i<=m;i++)    
{    
if(n%i==0)    
{    
printf("It is a prime numbers");    
flag=1;    
break;    
}    
}    
if(flag==0)    
printf("It is not a prime number");     
return 0;  
 }    