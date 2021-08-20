
public class MainArrayPractice {

	public static void main(String[] args) {
		
		int[] ar = {1,5,7,4,8,6};
		System.out.println("ar[] = " + ar[2]);
		
		printArray(ar);
		Methods.sumArray(ar);
	}

	public static void printArray(int[] ar) {
		for(int i = 1; i< ar.length; i++)
		{
			System.out.print(ar[i]);
		}
		System.out.println();
	}
}
