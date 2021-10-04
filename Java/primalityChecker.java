import java.util.Scanner;

public class primalityChecker {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    boolean flag = true;
    for (int i = 2; i <= Math.sqrt(n); i++) {
      if (n % i == 0) {
        flag = false;
        break;
      }
    }

    System.out.println(flag);

    sc.close();
  }

}
