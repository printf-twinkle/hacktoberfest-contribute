import java.util.*;

public class prime
{
  public static void main(String args[])
  {

        Scanner scan = new Scanner(System.in);
        int n;
        int c=0;
        int i;


        System.out.println("Enter a Number you want to check : ");
        number = scan.nextInt();
        
        for(i=2; i<number; i++)
        {
            if(n%i==0)
            {
                c++;
                break;
            }
        }
        if(c==0)
        {
            System.out.println("This is a prime number");
        }
        else
        {
            System.out.println("This is not a prime number");
        }
    }
 }
    
