import java.util.Scanner;



public class MainSapper {
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		int fieldX = -1;
		int fieldY = -1;
		do
		{
			System.out.println("Enter field size x ");
			fieldX = Function.scanNum(scan);
			System.out.println("Enter field size y ");
			fieldY = Function.scanNum(scan);
			if (fieldX<1 || fieldY<1) 
			{
				System.out.println("Incorrect data. Please try again");
			}
		}while(fieldX<1 || fieldY<1 );
		
		int[][] field= new int[fieldX][fieldY]; 
		Function.randomField(field);
		Function.printField(field);
		
		coordinates dot = new coordinates(-1, -1);
		do
		{
			do 
			{
				dot = Function.scanXY(scan);
				if ((dot.x<1) || (dot.y<1) || (dot.x > fieldX) || (dot.y>fieldY))
				{
					System.out.println("Incorrect data. Field is " + fieldX + "x" + fieldY);
					
				}
			} while ((dot.x<1) || (dot.y<1) || (dot.x > fieldX) || (dot.y>fieldY));
		
		
			switch (field[dot.x-1][dot.y-1])
			{
				case 1: System.out.println("You found mine");
						field[dot.x-1][dot.y-1]=-1;
						break;
				case 0: System.out.println("You don't found mine. Try again");
						field[dot.x-1][dot.y-1]=-1;
						break;
				default: System.out.println("Such a move was. Try again");	// скорректировать
			};
		} while (!Function.isCleared(field));		
		System.out.print("Congratulations field was cleared");
		scan.close();
	}
}
