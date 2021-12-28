package oops_in_java;

public class Abstraction {

	public static void main(String[] args) {
		
		Audi a1 = new Audi();
		a1.start();
		Jaguar j1 = new Jaguar();
		j1.start();
	}
	
}

class Audi extends Car{

	@Override
	void start() {
		System.out.println("Audi is going to start");
		
	}
	
}

class Jaguar extends Car{

	@Override
	void start() {
		System.out.println("Jaguar is going to start");
		
	}
	
}


 abstract class Car {						// Abstract is used when we know that it cannot create any object it's just a concept kind of thing so we use abstract keyword
	int price;								// Abstract method do not specify a body means no need 
	
	abstract void start();
}
