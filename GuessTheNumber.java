//Program to make a Guess The Number game
import java.util.Random;
import java.util.Scanner;

class Game {
	public int number;
	public int GuessedNumber;
	public int NoOfGuesses = 0;

	public int getNoOfGuesses() {
		return NoOfGuesses;
	}

	public void setNoOfGuesses(int noOfGuesses) {
		this.NoOfGuesses = noOfGuesses;
	}
Game() {
		Random rand = new Random();
		this.number = rand.nextInt(100);
	}
void TakeUserInput() {
	System.out.println("Guess The Number: ");
	Scanner sc=new Scanner(System.in);
	GuessedNumber=sc.nextInt();
}
	public int NoOfGuesses() {
		return NoOfGuesses;
	}
	boolean IsCorrectNumber() {
		NoOfGuesses++;
	 if (GuessedNumber==number) {
		 System.out.println("Bingo! You guessed it right.");
		 System.out.format("The number was %d and you guessed it in %d attempts",number,NoOfGuesses);
		 return true;
	 }
	 else if (GuessedNumber>number){
		 System.out.println("Too high....");
	 }
	 else if (GuessedNumber<number) {
		System.out.println("Too low....");
	}
	 return false;
	}
}

public class GuessTheNumber {
	public static void main(String[] args) {
		Game g=new Game();
		boolean b=false;
		while(!b) {
		g.TakeUserInput();
		b=g.IsCorrectNumber();
	}
	}
}
