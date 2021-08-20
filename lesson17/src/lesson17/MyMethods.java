package lesson17;
/*
 * project MyJavaMethods
 * 
 *  class MyMethods
 *  1.
 *  public static int XpowerY(int x,int y)
 *  2.
 *  public static void printArrayReverse(int[] ar)
 *  ar->[9][2][1][4][5]
 * 
 *  output:
 *  5 4 1 2 9 
 * 
 *  3.
 *   public static int arrayEvensSum(int[] ar)
 *   ar->[9][2][1][4][5]
 *   
 *   2 + 4 = 6
 *   return 6
 *   
 *   class MainMyMethods
 *   main - > call all methods from MyMethods
 * 
 * 
 * 
 * 
 */
public class MyMethods {

	public static int XpowerY(int x,int y)
	{
		int res = x;
		for (int i = 1; i<y; i++) 
		{
			res *= x;
		}
		return res;
	}
	
	public static void printArrayReverse(int[] ar)
	{
		for (int i = ar.length - 1; i>=0; i--)
		{
			System.out.print(ar[i]+" ");
		}
		System.out.println();
	}
	public static int arrayEvensSum(int[] ar)
	{
		int res = 0;
		for (int i = 0; i < ar.length; i++) 
		{
			if ( ar[i] % 2 == 0) 
			{
				res += ar[i];
			}
		}
		return res;
	}
}
