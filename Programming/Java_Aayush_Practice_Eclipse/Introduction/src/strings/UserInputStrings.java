package strings;
import java.util.Scanner;
public class UserInputStrings {

	public static void main(String[] args) {
		System.out.print("enter your name : ");
		Scanner sc = new Scanner(System.in);
		String name = sc.nextLine();
		System.out.println(name+" is a good boy");
		

	}

}
