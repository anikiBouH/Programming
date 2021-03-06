/*
 * Create functions for printing arrays:
  1.
    void printFloatArray(float ar[],
                         int size)
          0    1    2   3
   ar-> [9.2][7.1][6.8][7.5]
   size - 4
   [9.2][7.1][6.8][7.5]

  2.
   void printArrayReverse(int ar[],
                          int size)
         0  1  2  3  4  5
    ar->[9][2][7][1][4][6]
    size -> 6
    6 4 1 7 2 9
 *
 */
#include <stdio.h>
void printFloatArray(float ar[], int size);
void printArrayReverse(int ar[], int size);

int main()
{
	int size = 4;
	float arr[size];
	arr[0] = 9.2;
	arr[1] = 7.1;
	arr[2] = 6.8;
	arr[3] = 7.5;
	printFloatArray(arr,size);

	int arr1[] = {9,2,7,1,4,6};
	size = 6;
	printArrayReverse(arr1, size);

	return 0;
}


void printFloatArray(float ar[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("[%.1f]\t", ar[i]);
	}
	printf("\n");
}

void printArrayReverse(int ar[], int size)
{
	int i;
	for(i = size-1; i>=0; i--)
	{
		printf("[%d]\t", ar[i]);
	}
	printf("\n");
}
