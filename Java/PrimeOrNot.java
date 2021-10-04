// Contributor Info : 
//     Name : Riya Bhandari
//     Git : https://github.com/RiyaBhandari-2811

// Issue Info : 
//     Issue no. : 3
//     Statement : Check if a number entered by the user is prime or not #3


import java.util.*;

public class PrimeOrNot {

    private static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {

        // Taking User Input 
        System.out.print(" Enter the number : ");
        int num = input.nextInt();

        boolean flag = false;

        // RUN LOOP & CHECKING WEATHER IT IS  PRIME OR NOT 
        for (int i = 2; i <= num / 2; ++i) {
            // condition for nonprime number
            if (num % i == 0) {
            flag = true;
            break;
            }
        }
    
        // Display appropriate message
        if (!flag)
            System.out.println(num + " is a prime number.");
        else
            System.out.println(num + " is not a prime number.");

    }
  }