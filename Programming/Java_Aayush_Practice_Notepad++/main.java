	class Area
	{
		void sq(int n)
		{
			System.out.println("Area of square is : "+n*n);
		}
		void rect(int l,int b)
		{
			System.out.println("Area of rectangle is : "+l*b);
		}
	}
	class Perimeter
	{
		void sq(int n)
		{
			System.out.println("Perimeter of square is : "+4*n);
		}
		void rect(int l,int b)
		{
			System.out.println("Perimeter of rectangle is : "+2*(l+b));
		}
	}

	class main {

	public static void main(String[] args) {
		Area a=new Area();
		a.sq(2);
		a.rect(4, 5);
		Perimeter p=new Perimeter();
		p.sq(2);
		p.rect(4, 5);
	}
}