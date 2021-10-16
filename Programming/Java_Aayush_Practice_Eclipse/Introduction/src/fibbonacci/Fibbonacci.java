package fibbonacci;
import java.util.Scanner;
public class Fibbonacci {
	public static void main(String[] args) {
		System.out.print("enter the no. to which fibbonacci series is to be printed = ");
	Scanner sc = new Scanner(System.in);
	int n = sc.nextInt();
	int a = 0;
	int b = 1;
	System.out.print("series is "+a);
	System.out.print(" "+b);
	for (int i=0;i<n-2;i++) {
	int c = a+b;
	System.out.print(" "+c);
	a = b;
	b = c;
	}
	}

}
