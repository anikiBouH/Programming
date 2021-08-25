
import java.util.*;

public class MainKata {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//System.out.println(toAlternativeString("hello world"));
		//System.out.println(toAlternativeString("12345"));	
		//System.out.println(toAlternativeString("1a2B3c4d5e"));
		//System.out.println(twoSort(new String[] {"take", "over", "the", "world", "maybe", "who", "knows", "perhaps","bitcoin","are"}));
		//System.out.println(findSmallestInt(new int[]{78,56,-232,12,11,43}));
		//System.out.println(remove("!!HI!!!"));
		//System.out.println(filterOddNumber(list).toString());
		//System.out.println(hexToDec("A"));
		System.out.println(quarterOf(1));
		
	}
	
	public static Integer[] multipleOfIndex(int[] array) {
		List<Integer> list = new ArrayList<Integer>() ;
		for(int i = 1; i<array.length - 1; i++)
		{
			if (array[i] % i == 0) list.add(array[i]);
		}
		
		Integer[] arr = new Integer[list.size()];
		arr = list.toArray(arr);
		return arr;//your code;
	  }
	
	 public static int quarterOf(int month) {
	       return (int)Math.ceil((month) / 3.);
	    }
	
	
	
	public static int hexToDec(final String hexString) {
	   
		int sum = 0;
		int mul = 1; 
		for(int i = hexString.length(); i>0; i--) 
		{
			switch (hexString.charAt(i-1)) {
			case '0': sum += mul*0; break;
			case '1': sum += mul*1; break;
			case '2': sum += mul*2; break;
			case '3': sum += mul*3; break;
			case '4': sum += mul*4; break;
			case '5': sum += mul*5; break;
			case '6': sum += mul*6; break;
			case '7': sum += mul*7; break;
			case '8': sum += mul*8; break;
			case '9': sum += mul*9; break;
			case 'A': sum += mul*10; break;
			case 'B': sum += mul*11; break;
			case 'C': sum += mul*12; break;
			case 'D': sum += mul*13; break;
			case 'E': sum += mul*14; break;
			case 'F': sum += mul*15; break;
			case 'a': sum += mul*10; break;
			case 'b': sum += mul*11; break;
			case 'c': sum += mul*12; break;
			case 'd': sum += mul*13; break;
			case 'e': sum += mul*14; break;
			case 'f': sum += mul*15; break;
			default: sum = -sum;
			}
			mul*= 16;
		}
	    return sum;
	  }
	 public static int[] countPositivesSumNegatives(int[] input)
	    {
		 
	       if (input == null || input.length == 0)  return input; 
	       int[] a = new int[2];
	       for (int i : input) {
	    	   if (i>0) 
	    	   {
	    		   a[0]++;
	    	   } else
	    	   {
	    		   a[1]+=i;
	    	   }
			
	       }
	       return a;
	    }
	
	public static int closeCompare(double a, double b) {
		
		
		return a>b ? 1: a==b ? 0:-1; // TODO
	  }
	  
	  public static int closeCompare(double a, double b, double margin) {
	      
		  
		  return Math.abs(a - b)<= margin? 0: a>b ? 1: -1 ; // TODO
	    
	  }
	
	public static List<Integer> filterOddNumber(List<Integer> listOfNumbers)
    {
		ArrayList<Integer> list = new ArrayList<Integer>();
        for (Integer i : listOfNumbers)
        {
            if (i%2 != 0)
            {
                list.add(i);
            }
        }
        return list;
    }
	
	 public static String remove(String s){
		  //coding and coding....
		  while (s.charAt(s.length()-1)=='!')
		  {
			  s = s.substring(0, s.length()-1);
		  }
		 return s;
		}
	 public static int findSmallestInt(int[] args) {
		 java.util.Arrays.sort(args);
		 return args[0];
	    }
	 public static String twoSort(String[] s) 
	 {
	
		 Arrays.sort(s);
		 String str = "";
		 str += s[0].charAt(0);
		 for(int i = 1; i<s[0].length(); i++) 
		 {
			 str += "***"+s[0].charAt(i);
		 }
		 return str;
	 }
	
	  public static boolean feast(String beast, String dish) {
		    	
		  	
		    return (beast.charAt(0)==dish.charAt(0))&&(beast.charAt(beast.length()-1)==dish.charAt(dish.length()-1));
		    
		  }
	  public static String toAlternativeString(String string) {
		    // your code here!
		  char[] a = string.toCharArray();
		  String str="";
		  for (char c : a) {
			  System.out.print(c+" ");
			  if(c>=65 && c<=90){
				    c=(char) (c+32);
			  } else  if(c>=97&&c<=122){
				  			c=(char) (c-32);
			  			}
			  System.out.println(c);
			  str+=c;
		  }
		  	return str;
		  }
	  
}
