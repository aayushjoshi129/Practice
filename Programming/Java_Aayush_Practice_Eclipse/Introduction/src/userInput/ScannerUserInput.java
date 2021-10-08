package userInput;
import java.util.Scanner;
public class ScannerUserInput {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		int principal = sc.nextInt();
		float rate = sc.nextFloat();
		int time = sc.nextInt();
		float simpleIntrest = principal * rate * time / 100 ;
	System.out.println("the simple intrest is "+simpleIntrest);
	}

}
