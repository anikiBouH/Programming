import java.util.Scanner;


public class Function {

	public static coordinates scanXY(Scanner scan) {
		
		coordinates dot = new coordinates(-1, -1);
		
		System.out.println("Enter x = ");
		dot.x = scan.nextInt();
		System.out.println("x = "+ dot.x);
		System.out.println("Enter y = ");
		dot.y = scan.nextInt();
		System.out.println("y = "+ dot.y);
		
		return dot;
	}
	
	public static int scanNum(Scanner scan) {
		int res = scan.nextInt();
		return res;
	}
	
	
	public static boolean	isCleared(int[][] field) {
		boolean flag = true;
		for(int j =0; j<field.length;j++) 
		{
			for (int i : field[j])
			{
				if (i == 1) 
				{
					flag = false;
				}
			}
		}
		return flag;
	}
	
	public static void randomField(int[][] field) {

		for(int j = 0; j < field.length; j++) {
			for(int i = 0; i< field[j].length; i++)
			{
				field[j][i] = (int)(Math.random()*2);
			}
		}
	}
	
	public static void printField(int[][] field) {
		System.out.println("***FIELD***");
//		for(int j = 0; j < field.length; j++) {
//			for(int i = 0; i< field[j].length; i++)
//			{
//				System.out.print(field[j][i]);
//			}
//			System.out.println();
//		}
//		System.out.println();
//		field.
		for (int[] a : field) {
		 for (int i : a) {
		  System.out.print(i);
		 }
		 System.out.println();
		}
	}
}
