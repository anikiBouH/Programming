package lesson18;
import java.util.*;

public class ClassWork {

	public static void main(String[] args) {
		//Передача примитивных типов только по значению, для объектов только по ссылке!!!!
		int[] ar = new int[] {1,2,3,4,-1,1,5,6,7,6,-2,5,4,3,2,1};
//		MyFunction.insertionSort(ar, '>');
//		System.out.println(Arrays.toString(ar));
//		MyFunction.insertionSort(ar, '<');
//		System.out.println(Arrays.toString(ar));
//		Arrays.sort(ar);
				
		ar = new int[] {1,2,3,4,-1,1,5,6,7,6,-2,5,4,3,2,1};
		System.out.println(Arrays.toString(MyFunction.sortArrayMaxToEnd(ar)));
		MyFunction.printArray(ar);
		System.out.println();
		ar = new int[] {1,2,3,4,-1,1,5,6,7,6,-2,5,4,3,2,1};
		System.out.println(Arrays.toString(MyFunction.sortArrayMinToEnd(ar)));
		System.out.println();
		ar = new int[] {1,2,3,4,-1,1,5,6,7,6,-2,5,4,3,2,1};
		System.out.println(Arrays.toString(MyFunction.sortArrayEvenToEnd(ar)));
		System.out.println();
		ar = new int[] {1,2,3,4,-1,1,5,6,7,6,-2,5,4,3,2,1};
		System.out.println(Arrays.toString(MyFunction.oddAdnEvenSort(ar)));
	}

}
