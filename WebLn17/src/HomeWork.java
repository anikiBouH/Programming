public class HomeWork {

	
	public static void main(String[] args) {
		// только то что мы знаем;
		
		long x = 88112666;
		System.out.println(x);
		sequenceOfDigit(x); // выводит максимальную длину и начальный индекс последовательно идущих одинаковых цифр.
							// вне зависимости от повторов 22286662222 
		long y = 22286662222l;
		System.out.println(y);
		sequenceOfDigit(y);
		System.out.println(x);
		sequenceOfDigit2(x);// выводит максимальное количество одинаковых цифр и индекс начального вхождение цифры
		int[] arr = new int[] {-15, 17, -17, 15, 5, 55};
		System.out.println(minValue(arr));
		System.out.println(averageValue(arr));
		
	}
	
	
	public static void sequenceOfDigit(long x) {
		 //разбиваем число на цифры
		int[] digits = new int[19];
		int countOfDigits = 0;
		do
		{
			
			digits[countOfDigits] =(int) (x % 10);
			x /= 10;
			countOfDigits++;
		}while(x!=0);
		//переворачиваем 
		reverse(digits, countOfDigits);
		
		int maxsequence = 0; // минимально возможная последовательность.
		int maxsequenceindex = 0;
		int sequence = 0;
		int sequenceindex = 0;
		int digit = digits[0];
		for(int i = 0; i < countOfDigits; i++)
		{
			if (digits[i] == digit) 
			{
				sequence++;
			}
			else 
			{
				if (sequence > maxsequence)
				{
					maxsequence = sequence;
					maxsequenceindex = sequenceindex;
				}
				sequence = 1;
				sequenceindex = i;
				digit = digits[i];
			}
		 }
		// анализируем последнюю последовательность
		 if (sequence > maxsequence)
		 {
	  		maxsequence = sequence;
			maxsequenceindex = sequenceindex;
		 }
		
		 System.out.println("Max sequence = " + maxsequence + " Start index  " + maxsequenceindex );
	}
	
	public static void sequenceOfDigit2(long x) 
	{
		// число в строку
		String str = Long.toString(x);
		int maxsequence = 0;
		int maxsequenceindex = 0;
		int sequence = 0;
		for(char i = '0'; i <= '9'; i++)
		{
			sequence = countOfChar(str, i);
			if (sequence > maxsequence)
			{
				maxsequence = sequence;
				maxsequenceindex = str.indexOf(i);
			}
			
		}
		System.out.println("Max sequence = " + maxsequence + " Start index  " + maxsequenceindex );
	}
	
	public static int countOfChar(String s, char c)
	{
		int count = 0;
		for (char x : s.toCharArray()) {
			if(x == c) 
			{
				count ++;
			}
		}
		return count;
	}
	public static int minValue(int[] ar) {
		int min = ar[0];
		for (int x : ar) {
			if(x < min)
			{
				min = x;
			}
		}
		return min;
	}
	
	public static int averageValue(int[] ar)
	{
		long average = 0;
		for (int x : ar) {
			average += x;
		}
		 average /= ar.length;
		return (int)average;
	}
	
	public static void reverse(int[] ar, int count) {
		int temp;
		for(int i = 0, j= count-1; i<j; i++, j-- )
		{
			temp = ar[i];
			ar[i] = ar[j];
			ar[j] = temp;
		}
	}
	public static void toArray() {
		
	}
	
	
	
	public record rec(int index, int count){}; 
	rec[] arr = new rec[10];
		
	





	
	
	
}
