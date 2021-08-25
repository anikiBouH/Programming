package lesson18;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class MyFunction {

	public static int[] sortArrayMaxToEnd(int[] ar)
	{
		boolean res = false;
		do
		{
			res = maxToEnd(ar);
		} while(res);
		
		return ar;	
	}
	
	public static int[] sortArrayMinToEnd(int[] ar)
	{
		boolean res = false;
		do
		{
			res = minToEnd(ar);
		} while(res);
		return ar;
	}
	
	public static int[] sortArrayEvenToEnd(int[] ar)
	{
		boolean res = false;
		do
		{
			res = evenToEnd(ar);
		} while(res);
		return ar;
	}
	
	public static boolean maxToEnd(int[] ar) {
		boolean flag = false;
		for (int i = 0; i < ar.length-1; i++) 
		{
			if(ar[i]<ar[i+1])
			{
				Swap(ar, i, i+1);
				flag = true;
			}
		}
		return flag;
	}
	
	public static boolean minToEnd(int[] ar) {
		boolean flag = false;
		for (int i = 0; i < ar.length-1; i++) 
		{
			if(ar[i]>ar[i+1])
			{
				Swap(ar, i, i+1);
				flag = true;
			}
		}
		return flag;
	}
	
	public static boolean evenToEnd(int[] ar) {
		boolean flag = false;
		for (int i = 0; i < ar.length-1; i++) 
		{
			if(ar[i] % 2 == 0 && (int)Math.abs(ar[i+1])%2 == 1)
				//(ar[i] % 2 == 0 && (ar[i+1] % 2 == 1 || ar[i+1] % 2 == -1)
			{
				Swap(ar, i, i+1);
				flag = true;
			}
		}
		return flag;
	}
	
	public static Integer[] oddAdnEvenSort(int[] ar) {
			
		List<Integer> listOdd = new ArrayList<>();
		List<Integer> listEven = new ArrayList<>();
		for (int x : ar)
		{
			if(x % 2 == 0)
			{
				listEven.add(x);
			}else 
			{
				listOdd.add(x);
			}
			
		}
		Collections.sort(listEven);
		Collections.sort(listOdd);
		listOdd.addAll(listEven);
		Integer[] arr = new Integer[listOdd.size()];
		arr = listOdd.toArray(arr);
		return arr;
		
	}
	
		public static void Swap(int[] arr, int indexA, int indexB) {
			int temp = arr[indexA];
			arr[indexA] = arr[indexB];
			arr[indexB] = temp;
		}
		public static void Swap(double[] arr, int indexA, int indexB) {
			double temp = arr[indexA];
			arr[indexA] = arr[indexB];
			arr[indexB] = temp;
		}
		public static void arrayRevers(int[] ar) {
			for (int i = 0, j=ar.length-1; i < j; i++, j--)
			{
				MyFunction.Swap(ar, i, j);
			}
		}
		
		public static void printArray(int[] ar) {
			System.out.print("[");
			for(int i = 0; i < ar.length - 1; i++ ) 
			{
				System.out.print(ar[i] + ", ");
			}
			System.out.println(ar[ar.length -1]+"]");
		}
		
		public static void insertionSort(int[] arr, char ch) {
			
		switch (ch) {
		case '>':
			for (int i = 0; i < arr.length-1; i++)
			{
				for (int j = i+1; j < arr.length; j++)
				{
					if(arr[i]>arr[j]) {Swap(arr, i, j);}
				}
			}
			break;

		case '<':
			for (int i = 0; i < arr.length -1; i++)
			{
				for (int j = i+1; j < arr.length; j++)
				{
					if(arr[i]<arr[j]) {Swap(arr, i, j);}
				}
			}
			break;
			default: System.out.println("Not taught yet");
		}	
			
		}
}
