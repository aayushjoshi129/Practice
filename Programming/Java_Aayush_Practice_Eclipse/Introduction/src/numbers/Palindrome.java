package numbers;

import java.util.Scanner;

public class Palindrome {

	public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	System.out.print("enter the number to check palindrome : ");
	int n = sc.nextInt();
	int temp = n;
	int remainder=0,reverse=0;
	while (n!=0)
	{
	remainder = n % 10;
	reverse = reverse*10 + remainder;
	n = n / 10;
	}
	if(reverse == temp)
	{
	System.out.println("the " + temp + " is palindrome ");
	}
	else
	{
		System.out.println("the " + temp + " is not a palindrome number");
	}
	}
}
