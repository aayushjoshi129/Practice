package javaSwayamQuestionsWeek1;
import java.util.Scanner;
public class GreatestOfXYZ {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in); 
        System.out.print("enter the first value : ");
        int x = s.nextInt(); 
        System.out.print("enter the second value : ");
        int y = s.nextInt();
        System.out.print("enter the third value : ");
        int z = s.nextInt();
        int result = 0;
if(x >= y && x >= z)
        {
            result=x;
        }
        else if(y >= z)
        {
            result=y;
        }
        else
        {
            result=z;
        }
System.out.println("the greatest no. is "+result);
 }
}
