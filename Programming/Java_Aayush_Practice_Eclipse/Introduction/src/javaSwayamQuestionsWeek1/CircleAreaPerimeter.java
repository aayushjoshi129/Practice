package javaSwayamQuestionsWeek1;
import java.util.Scanner;
public class CircleAreaPerimeter
{  
	       public static void main(String[] args) {
	       Scanner s = new Scanner(System.in); 
	       System.out.print("Enter the radius of the circle : ");
	       double radius= s.nextDouble();
	       double perimeter;
	       double area;
	if(radius<=0)
	 {
	  System.out.println("please enter non zero positive number ");
	 }
	else
	{
	 perimeter = 2 * Math.PI * radius;
	 area = Math.PI * radius * radius;
	 System.out.println("The perimeter of circle is "+perimeter);
	 System.out.println("the area of circle is "+area);
	}
	 }
	}