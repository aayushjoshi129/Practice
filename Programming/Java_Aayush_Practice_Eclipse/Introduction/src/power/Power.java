package power;
import java.util.Scanner;
public class Power {

	public static void main(String[] args) {
		System.out.print("enter the value of a = ");
	Scanner sc = new Scanner(System.in);
	int a = sc.nextInt();
	System.out.print("enter the value of b = ");
	int b = sc.nextInt();
	int result = 1;
	for (int i=1;i<=b;i++)
	{
	result*=a;
	}
	System.out.println("result is "+result);
	}
}
