package primeNumber;
import java.util.Scanner;
public class PrimeNumber {

	public static void main(String[] args) {
	System.out.print("enter the no. to check = ");
	Scanner sc = new Scanner(System.in);
	int n = sc.nextInt();
	boolean isPrime = true;
	for (int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
		isPrime = false;
		break;
		}
	}
	if(n<2) isPrime=false;
	System.out.print(" is prime "+isPrime);
	}
}
