import java.util.Scanner;

public class Factorial {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the number to calculate factorial: ");
    int n = sc.nextInt();
    System.out.printf("Factorial of %d is %d.", n, factorial(n));
  }

  public static int factorial(int n) {
    if (n == 0 || n == 1)
      return 1;
    return n * factorial(n - 1);
  }
}