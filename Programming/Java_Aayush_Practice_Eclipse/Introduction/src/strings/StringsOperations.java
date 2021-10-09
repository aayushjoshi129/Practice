package strings;

public class StringsOperations {

	public static void main(String[] args) {
	String cars = "Hyundai , Mercedes , Ferrari , Buggati";
	String allcars[] = cars.split(",");
	String name1 = "Aayush Joshi"; // in heap area
	String name3 = new String("Aayush Joshi"); // in string pool area
	String name4 = "Aayush Joshi";
	String name2 = "Rajat Joshi"; // in heap area 
	System.out.println(name1+" "+name2); //print char names
	System.out.println(name1.length()+" "+name2.length()); // string int length
	System.out.println(name1+name2); //concatenation
	System.out.println(name1.concat(name2)); // concatenation using concat function
	System.out.println(name1.concat(" is a smart guy")); // concatenation using concat function
	System.out.println(name1.charAt(4)); //charAt means Character At The Index Value
	System.out.println(name1.substring(6)); // next to the value in substring
	System.out.println(name1.substring(4,10)); // in between given indexes strings characters
	System.out.println(name1.contains("Aayush")); // boolean contains (CharSequence s) check whether it contains given string or not
	System.out.println(name1 == name3); // Boolean Equals check returning false because one is in heap area and one is in string pool area
	System.out.println(name1 == name4); // Boolean Equals here it gives true because both is palced in heap area
	System.out.println(name1.equals(name3)); // it checks only values not object reference
	System.out.println(name1.isEmpty()); // To Check string is empty or filled 
	System.out.println(name1.replace('A','a')); // replace in string
	for(String car: allcars)
	{
	System.out.print(car); // split string
	}
	System.out.println();
	System.out.println(name1.indexOf('o')); // index value
	}

}
