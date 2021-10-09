package tableFrom1To20;
import java.util.Scanner;
public class TableFrom1To20 {

	public static void main(String[] args) {
		System.out.print("Enter the no. upto which table to be printed : ");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for (int j=1;j<=n;j++)
		{
		for (int i=1;i<=10;i++)
		{
			System.out.print(i*j+" ");
		}
		System.out.println();
		}
	}

}
