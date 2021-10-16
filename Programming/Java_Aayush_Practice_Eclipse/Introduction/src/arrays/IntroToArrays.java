package arrays;

import java.util.Scanner;

public class IntroToArrays {

	public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	System.out.print("enter the no. of elements you want in array : ");
	int n = sc.nextInt();
	int[] arr = new int[n];
	for (int i =0;i<n;i++)
	{
		System.out.print("enter the no. in array : ");
		arr[i] = sc.nextInt();
	}
	for (int i=0;i<n;i++)
	{
		System.out.println("the given array is "+arr[i]);	
	}
	}

}
