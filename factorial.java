import java.util.*;

public class prime
{
  public static void main(String args[])
  {

        Scanner scan = new Scanner(System.in);
        int n;
        int f=1;
        int i;


        System.out.println("Enter a Number : ");
        n = scan.nextInt();
        
        for(i=1; i<=n; i++)
        {
         f=f*i;
        }
        System.out.println("Factorial : " + f);
        
  }
 } 
