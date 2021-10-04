import java.util.Scanner;

public class CheckPrime {

  public static void main(String[] args) {
	  
    Scanner sc = new Scanner(System.in);
	  
	  int no;
	  boolean isPrime = false;
	  
	  System.out.printf("Enter the number : ");
	  no = sc.nextInt();
	  
	  for (int i = 2; i <= no/2; i++) {
		  
		  if (no % i == 0) {
			  isPrime = true;
			  break;
		  }
		  
	  }
	  
	  if (!isPrime) {
		  System.out.println("Yes, it is a Prime number.");
	  } else {
		  System.out.println("No, it is not a Prime number");
	  }
    
  }
}
