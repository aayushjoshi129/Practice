package pattern;

import java.util.Scanner;

public class Pattern4 {

	public static void main(String[] args) {
		System.out.print("enter the no. upto which to create pattern : ");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for (int j=1;j<=n;j++)
		{
		for (int i=1;i<=j;i++) {
			System.out.print("* ");
		}
		System.out.println();
		}
	}

}
