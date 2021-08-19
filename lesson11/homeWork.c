#include <stdio.h>
int digitsCount(int number);
int hasDigit(int number,int digit);
int evensCount(int number);
void printNumberReverse(int number);
void printOddsReverse(int number);

int main()
{
	int res = digitsCount(2147000000);
	printf("digits count = %d\n",res);

	res = hasDigit(45969798,2);
	printf("res = %d \n",res);

	res = evensCount(0);
	printf("res = %d \n",res);

	printNumberReverse(344571);

	printOddsReverse(34567);

	return 0;
}//               34454        4

void printOddsReverse(int number)
{
	do
	{
		if (number % 2 == 1)
		{
			printf("%d", number % 10);
		}
		number /= 10;
	}while (number !=0);
	printf("\n");
}

void printNumberReverse(int number)
{
	do
	{
		printf("%d", number % 10);
		number /= 10;
	}while (number !=0);
	printf("\n");
}

int evensCount(int number)
{
	int count = 0;
	do
	{
		if (number % 2 == 0)
		{
			count++;
		}
		number /= 10;
	}while (number != 0);

	return count;
}
int hasDigit(int number,int digit)
{
	int rem = 0,count = 0;
	do{
		rem = number % 10;
		if(rem == digit)
			count++;
		number = number / 10;
	}while(number != 0);
	return count;
}
/*
 * Homework :
 *
 * 1.
 *    int evensCount(int number)
 *
 *    number = 45678 8%2 == 0
 *    return 3
 * 2.
 *    void printNumberReverse(int number)
 *    number = 34567
 *    output :
 *    76543
 *  3.
 *     void printOddsReverse(int number)
 *    number = 34567
 *    output :
 *    753
 *
 *
 *  advanced :
 *  4.
 *    void printNumberInColumn(int number)
 *    number = 45678 (without reverse)
 *
 *    output :
 *    4
 *    5
 *    6
 *    7
 *    8
 *
 *
 *
 *
 */
/*
 *    number = 3456 digit = 8
 *
 *    1. 3456 % 10 = 6(rem)
 *    2. 6 == 8 ?
 *    3. 3456 / 10 = 345.6 -> number
 *    -------------------
 *    1. 345 % 10 = 5
 *    2. 5 == 8 ?
 *    3. 345 / 10 = 34.5 ->number
 * ----------------------------------
 *    1. 34 % 10 = 4
 *    2. 4 == 8 ? //return 1
 *    3. 34 / 10 = 3.4 -> number
 *    -----------------------------
 *    1. 3 % 10 = 3
 *    2. 3 == 8 ?
 *    3. 3 / 10 = 0.3 -> number
 *    ----------------------------
 *    number = 0
 *
 */


//                   0
int digitsCount(int number)
{
	int count = 0;
	do{
		number = number / 10;
		count++;
	}while(number != 0);
	return count;
}
/*
 *    number % 10 = 7
 *
 * number = 0 count = 0
 *
 * 34567 / 10 = 3456.7->number
 * count++(1)
 * -----------------
 * 3456 / 10 = 345.6->number
 * count++(2)
 *---------------------
 * 345 / 10 = 34.5->number
 * count++(3)
 * ---------------
 * 34 / 10 = 3.4 -> number
 * count++(4)
 * -------------------
 * 3 / 10 = 0.3 -> number
 * count++(5)
 * -------------------
 * number = 0
 *
 *
 *
 */
