package intorduction;

import java.util.Scanner;
public class Pattern {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter N : ");
		int n = sc.nextInt();
		int i=1;
		while(n>=i)
		for (i=1;i<=n;i++)
		{
			for (int j=1;j<=i;j++)
			{
			System.out.print("*");
			}
		System.out.println();
		}
		System.out.println(2*3);
	}

}
