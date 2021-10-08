package javaSwayamQuestionsWeek1;
import java.util.Scanner;
public class NumberIsArmstrongOrNot {
	   public static void main(String[] args) {
		   Scanner sc = new Scanner(System.in);
		   System.out.print("enter the no. to check whether a no. is armstrong or not : ");
		   int n=sc.nextInt();
	           int result=0;
	int temp=n;
	int c=0,t; 
	//Use while loop to check the number is Armstrong or not.
	// a no. is armstrong for example 153 
	// means 1*1*1 + 5*5*5 + 3*3*3 = 153
	// means if its all digits cubes sum is equal to original number then it is an Armstrong Number 
	    while(n>0)
		{
			t=n%10;
			n=n/10;
			c=c+(t*t*t);
		}		
		if(temp==c)
		{	result=1;
		System.out.println("the " + temp + " is Armstrong number");
		}
		else
		{	result=0;
		System.out.println("the " + temp + " is not a Armstrong number");
	    //Evaluation code 
		}
	 }
	}

