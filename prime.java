import java.util.Scanner;

public class Prime{
    static int checkPrime(int num){
        int count = 0 ;
        for( int i=2; i<num; i++){

            if(num % i == 0){
                count++;
                break;
            }
        }
        return count;
    }
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        System.out.print("Enter a Number you want to check : ");
        int number = scan.nextInt();

        if(checkPrime(number) <= 0) {
            System.out.print("This is a prime number");
        }
        else{
            System.out.print("This is not a prime number");
        }
    }
}
