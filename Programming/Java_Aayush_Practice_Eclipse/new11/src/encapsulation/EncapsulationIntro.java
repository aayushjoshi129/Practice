package encapsulation;

public class EncapsulationIntro {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Laptop l1 = new Laptop();
//		l1.price = 23;
		l1.ram = 4;
		l1.setPrice(23);
		System.out.println();
		System.out.println("Price of Laptop is "+ l1.getPrice() + "Thousands and it has a RAM of "+ l1.ram+"GB");
	}
	
//	public void doWork() {
//		System.out.println("working working");
//	}
	
}

class Laptop {
	int ram;
	private int price;
	
	public void setPrice(int price) {			// Setters function use to set the value of particular variable
		this.price = price;
	}
	public int getPrice() {						// Getters function use to get the value of particular variable
		return price;
	}
}