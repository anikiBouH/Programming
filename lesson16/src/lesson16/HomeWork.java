package lesson16;

public class HomeWork {

	public static void main(String[] args) 
	{
				
		System.out.println(calculator( 6, 0, 'n'));
		
//		printStars(5);
		
//		int n = 0;
//		System.out.println("number of digits of a "+n);
//		System.out.println(digitsCount(n));
//		System.out.println(digitsCount2(n));
//		System.out.println(digitsCount3(n));
//		System.out.println(digitsCount4(n));
//		
//		n = 45678;
//		System.out.println("number of digits of a "+n);
//		System.out.println(digitsCount(n));
//		System.out.println(digitsCount2(n));
//		System.out.println(digitsCount3(n));
//		System.out.println(digitsCount4(n));
//		
//		n = -159560;
//		System.out.println("number of digits of a "+n);
//		System.out.println(digitsCount(n));
//		System.out.println(digitsCount2(n));
//		System.out.println(digitsCount3(n));
//		System.out.println(digitsCount4(n));
	}
	public static double calculator(double num1, double num2, char action)
	{
		
		double res = 0;
		try {	
			if ((action != '*' )
				&& (action != '+')
				&& (action != '-')
				&& (action != '/')) 
			{
				throw new Exception("Error: Wrong action");
			}
			if (action == '+') 
			{
				res = num1+num2;
				return res;
			}
			if (action == '-')
			{
				res = num1-num2;
				return res;
			}
			if (action == '*')
			{
				res = num1*num2;
				return res;
			}
			if (action == '/') 
			{
				try {
					res = num1 / num2;
					return res;
				} catch (Exception e)
				{
					e.printStackTrace();
				}
		 
			}
		
		}
		catch(Exception e) {
			System.out.println(e.getMessage());
		}
		return res;
	}
	
	public static void printStars(int stars)
	{
		for (int i = 0; i<stars; i++)
		{
			System.out.print('*');
		}
		System.out.println();
	}
	public static int digitsCount(int number)
	{
		int res = 0;
		do
		{
			res++;
			number /= 10;
		} while (number !=0);
		
		return res;
	}
	
	public static int digitsCount2(int number)
	{
		int res = number>=0?Integer.toString(number).length():Integer.toString(number).length()-1;
		return res;
	}
	
	 public static int digitsCount3(int n) {
		 	n = Math.abs(n);
	        if (n>=1000000000) {return 10;}
	        else if (n>=100000000) {return 9;}
	        else if (n>=10000000) {return 8;}
	        else if (n>=1000000) {return 7;}
	        else if (n>=100000) {return 6;}
	        else if (n>=10000) {return 5;}
	        else if (n>=1000) {return 4;}
	        else if (n>=100) {return 3;}
	        else if (n>=10) {return 2;}	
	        else {return 1;}
	    }
	 
	 // ????? ???????? ??? :-)
	 public static int digitsCount4(int n)
	 {
		 n = Math.abs(n);
	     return n < 10 ? 1 : n < 100 ? 2 : n < 1000 ? 3 : n < 10000 ? 4 : n < 100000 ? 5 : n < 1000000 ? 6 : n < 10000000 ? 7 : n < 100000000 ? 8 : n < 1000000000 ? 9 : 10;
	 }
}
