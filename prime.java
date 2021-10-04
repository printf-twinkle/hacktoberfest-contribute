import java.util.Scanner;

public class prime{

    public static void main(String args[]) {

        Scanner scan = new Scanner(System.in);
        int number;
        int count=0;
        int i;


        System.out.print("Enter a Number you want to check : ");
        number = scan.nextInt();

        for(i=2; i<number; i++)
        {
            if(number%i == 0)
            {
                count++;
                break;
            }
        }
        if(count == 0)
        {
            System.out.print("This is a prime number");
        }
        else
        {
            System.out.print("This is not a prime number");
        }
    }
}