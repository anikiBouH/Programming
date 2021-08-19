#include<stdio.h>
void printStars(int stars , int inRow);
int factorial(int number);
int XpowerY(int x,int y);

int main()
{
	printStars(12,4);

	int n = 0;
	int res = factorial(n);
	printf("%d! = %d\n", n, res);

	n = 1;
	res = factorial(n);
	printf("%d! = %d\n", n, res);

	n = 5;
	res = factorial(n);
	printf("%d! = %d\n", n, res);

	n = 18;
	res = factorial(n);
	printf("%d! = %d\n", n, res);

	int x = 2;
	int y = 5;
	res = XpowerY(x,y);
	printf("%d^%d = %d\n", x, y, res);

	return 0;
}

int XpowerY(int x,int y)
{
	int pow = x;
	while (y>1)
	{
		pow *= x;
		y--;
	}
	return pow;
}
int factorial(int number)
{
	int f = 1;
	while (number > 1)
	{
		f *= number;
		number--;
	}
	return f;
}

void printStars(int stars , int inRow)
{
	int count = 0;
	while (stars > 0)
	{
		printf("*");
		stars--;
		count++;
		if (stars % inRow == 0)
		{
			printf("\n");
			count = 0;
		}

	}
}
/*
 * Homework :
 * 1.
 *  void printStars(int stars , int inRow)
 *  stars = 9 inRow = 3
 *  ***
 *  ***
 *  ***
 *
 *  2.
 *  int factorial(int number)
 *  number = 6! = 6*5*4*3*2*1 = 720
 *
 *  3. advanced
 *  int XpowerY(int x,int y)
 *  x = 2 y = 3 -> 2^3 = 8
 */
