package lesson19;

public class oop {

	public static void main(String[] args) 
	{
		Car pr1 = new Car();
		System.out.println(pr1.toString());
		
		Car pr2 = new Car("Audi A8","Red",2021);
		System.out.println(pr2.toString());
		
		Book pr3 = new Book();
		pr3.setAuthor("King");
		pr3.setTitle("It");
		pr3.setPages(1138);
		pr3.setIsbn(978067081);//978-0-670-81302-5
		System.out.println(pr3.toString());
		
		Book pr4 = new Book("King", "The Shining", 447, 978038512); //978-0-385-12167-5
		System.out.println(pr4.getAuthor() + " " + pr4.getTitle()  + " " + pr4.getPages()  + " " + pr4.getIsbn());
		
		
	}	
	
}
