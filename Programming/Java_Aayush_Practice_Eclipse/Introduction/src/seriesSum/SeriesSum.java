package seriesSum;

import java.util.Scanner;

public class SeriesSum {

	public static void main(String[] args) {
		System.out.print("enter the no. upto which you want the sum of series = ");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		float result = 0;
		for (float i =1 ; i<=n;i++)
		{
			result = result + 1/i;
		}
		System.out.println("the result is "+result);
	}

}
