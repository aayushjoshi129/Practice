package oops_in_java;

import encapsulation.EncapsulationIntro;

public class MainClass{
	
	public static void main(String[] args) {
		
		// TODO Auto-generated method stub
		
		
		Person p1 = new Person();
		p1.name = "Honey";
		p1.age = 24;
		
		System.out.println(p1.name + " " + p1.age);
		
		p1.Walk();
		p1.Eat();
		
		
		Person p2 = new Person();
		p2.name = "Diljit";
		p2.age = 23;
		p2.a = 21;
		p2.b = 8;
		p2.d = 47;
		
		System.out.println(p2.name + " " + p2.age);
		System.out.println(Person.d);		// Using Static Keyword using class variable to directly print from a class (no need to create an object)
		
		p2.Walk();
		p2.Eat();
		p2.Walk(10);
		
		
		System.out.println(p2.add());
		System.out.println(p2.mult());
		System.out.println(p2.subt());
		System.out.println(p2.div());
		System.out.println(p2.mod());
		
		Person p3 = new Person("Gippy",28);
		System.out.println("Hi I am "+p3.name+" and my age is "+p3.age);
		
		Developer d1 = new Developer("Ammy",21);
		d1.code();
		System.out.println(d1.name+" is a Developer whose age is "+d1.age +"and ");
		d1.Walk();
		
		EncapsulationIntro obj = new EncapsulationIntro();
		
		obj.doWork();					// Encapsulation
		
	}
}



	class Developer extends Person {
		
		public Developer(String name, int age) {
			super(name,age);						// super() keyword is used to call its parent's constructor

		}
		
		void Walk() {
			System.out.println("Developers can Walk Alone");
		}

		
		void code() {
			System.out.println("The Developer Codes...");
		}
		
		}

	class Person {
		protected String name;		// now it can only accessible to its children
		int age , a,b;
		static int d;
		
		public Person() {
			System.out.println("You Called me");
			
		}
		
		public Person(String NewName,int NewAge) {
			this();										// this() calls its same constructor means here it is calling Person()	after then it Person(args) get executed		
			name = NewName;
			age = NewAge;
		}
		
		void Walk() {
			System.out.println(name+" can Walk");
		}
		
		
		// POLYMORPHISM USING WALK FUNCTION (same method can executed in N ways)
		
		void Walk(int steps) {
			System.out.println(name+" Walked "+steps+" steps");
		}
		
		void Eat() {
			System.out.println(name+" can Eat");
		}
		
		int add() {
			return a+b;
		}
		
		int mult() {
			return a*b;
		}
		
		int div() {
			return a/b;
		}
		
		int subt() {
			return a-b;
		}
		
		int mod() {
			return a%b;
		}
		
	}
	
	
	/*
	 
	 *  Constructors = are used to create new objects
	 
	 *  Static Keyword means it is an class property not an object property (use it when you don't need to change the variable with reference to objects)
	 
	 *  this() calls its same constructor means here it is calling Person()	after then it Person(args) get executed	
	 
	 *  INHERITANCE = Child Inherits property of parent classes that is what Inheritance is called. (IS A RELATIONSHIP)
		** JAVA Doesn't allow Multiple Inheritance
		* Just to tackle multiple inheritance JAVA Interfaces is introduced
		
		
	 *  super() keyword is used to call its parent's constructor
	
	 *  POLYMORPHISM = Same method can be act in N different ways
	
	 	*  Compile time Polymorphism is that when it checks functions during compiling as done is Walk functions (called function walk with args as args is given)
	 	*	Run Time Polymorphism is that when it checks functions during Run time as done in Walk in Developer Class (called its own walk during runtime)
	
	 * ENCAPSULATION = used for data hiding / data protection / it means enscapsulating all methods and properties together in a capsule.
	  
	 * PACKAGES AND ACCESS MODIFIERS
	 	
	 	* PACKAGES can be called as folder like structure but can achieve many functionalities such as making a method private(accessed within a class) or public(accessed everywhere) or default(accessed in a package only) or protected(accessed only by childrens irrespective of access location)
	 	* methods accessing powers is known as access modifiers such as private(accessed within a class) or public(accessed everywhere) or default(accessed in a package only) or protected(accessed only by childrens irrespective of access location)
	
	 * Getters function use to get the value of particular variable
	 
	 * Setters function use to set the value of particular variable or method	
	 
	 * ABSTRACTION = It enables data hiding and security (hides all content from the users and just providing the facilities)
	  	example : A normal user can signup at Facebook without having knowledge of how data is being stored in database at Backend
	 
	 	* Abstract is used when we know that it cannot create any object it's just a concept kind of thing so we use abstract keyword
	 
	 	*  It is necessary to abstract the class of the abstract function , it is impossible to make any function abstract without making a class abstract
	  
	 * INTERFACE An interface in Java is a blueprint of a class. It has static constants and abstract methods.

		* The interface in Java is a mechanism to achieve abstraction. There can be only abstract methods in the Java interface, not method body. It is used to achieve abstraction and multiple inheritance in Java.
		* Java Interface also represents the IS-A relationship. It provides true abstraction
	
	* ABSTRACTION AND INTERFACES difference between them is that in Abstraction you can specify the body of the method but in interface you cannot specify its body.
		* Interfaces provides True Abstraction
	*
	*
	
	
	*/