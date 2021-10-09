package arrays;
import java.util.Scanner;
public class MultiDArraysSum {

	public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	System.out.print("enter the no. of rows : ");
	int rows = sc.nextInt();
	System.out.print("enter the no. of column : ");
	int column = sc.nextInt();
	int a[][] = new int[rows][column];
	int b[][] = new int[rows][column];
	int sum[][] = new int[rows][column];
	System.out.println("enter the elements of A : ");
	for(int i=0;i<rows;i++)
	{
		for (int j=0;j<column;j++)
		{
			a[i][j] = sc.nextInt();
		}
	}
	System.out.println("enter the elements of B : ");
	for(int i=0;i<rows;i++)
	{
		for (int j=0;j<column;j++)
		{
			b[i][j] = sc.nextInt();
		}
	}
	System.out.println("The Resultant Matrix Is : ");
	for(int i=0;i<rows;i++)
	{
		for (int j=0;j<column;j++)
		{
			sum[i][j] =a[i][j] + b[i][j];
			System.out.print(sum[i][j] +" ");
		}
	}
	System.out.println();
	}

}
