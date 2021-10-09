package arrays;

import java.util.Scanner;

public class AverageOfNumbersUsingArrays {

	public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	System.out.print("enter the no. of elements in array : ");
	int n = sc.nextInt();
	float average = 0;
	int [] arr = new int[n];
	for (int i=0;i<n;i++)
	{
		System.out.print("enter the " + i +" element in an array : ");
		arr[i] = sc.nextInt();
	}
	for (int i=0;i<n;i++)
	{
	average+= arr[i];
	}
	average = average/n;
	System.out.print("the average of " + n +" elements is "+average);
	}

}
