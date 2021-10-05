import java.util.*;
class palindrome
{
public static void main(String args[])
{
int n,r=0,rev=0;
Scanner SC=new Scanner(System.in);
System.out.println("Enter the number:");
n=SC.nextInt();
while(n>0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
if(rev==n)
System.out.println("palindrome number:");
else
System.out.println("not a palindrome number:");
}
}
