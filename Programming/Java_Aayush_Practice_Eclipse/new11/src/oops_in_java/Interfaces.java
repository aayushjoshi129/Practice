package oops_in_java;

public class Interfaces implements Bike {

	public static void main(String[] args) {
		
	}

	@Override
	public void start() {
		System.out.println("My Bike is Starting");
		
	}
	
}

interface Bike {					// Interfaces is a blueprint of class having static constants and abstract methods
	void start();
}