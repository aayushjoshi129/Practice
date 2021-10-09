package pattern;

import java.util.Scanner;

public class Pattern3 {

	public static void main(String[] args) {
		System.out.print("enter the no. upto which to create pattern : ");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for (int i=1;i<=n;i++)
		{
			for (int k=1;k<=i-1;k++)
			{
				System.out.print("  ");
			}
		for (int j=1;j<=n-i+1;j++)
		{
			System.out.print(" *");
		}
	
		System.out.println();
		}
	}

}
