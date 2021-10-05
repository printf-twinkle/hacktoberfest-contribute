import java.util.Scanner;

public class prime
{

    public static void main(String args[])
    {

        Scanner scan = new Scanner(System.in);
        int n;
        int c=0;
        int i;


        System.out.print("Enter a Number you want to check : ");
        n = scan.nextInt();

        for(i=2; i<n; i++)
        {
            if(nr%i == 0)
            {
                c++;
                break;
            }
        }
        if(c == 0)
        {
            System.out.print("This is a prime number");
        }
        else
        {
            System.out.print("This is not a prime number");
        }
    }
}
