package factorial;

import java.util.Scanner;

public class Factorial {

	public static void main(String[] args) {
	
	System.out.println("Enter the no. to find factorial = ");
	Scanner sc = new Scanner(System.in);
	int n = sc.nextInt();
		int factorial = 1;
		int i;
		for (i = n ; i>=1 ; i--)
		{
			factorial = factorial * i;
		}
	System.out.println(factorial);

	}

}
