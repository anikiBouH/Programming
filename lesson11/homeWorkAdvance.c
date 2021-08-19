#include <stdio.h>

void printNumberN1 (int n);
void printNumberN2 (int n);

int main ()
{
	int number;
	printf("Enter number\n");
	fflush(stdout);
	scanf("%d", &number);

	printf("Первое решение\n");
	printNumberN1(number);
	printf("Второе решение\n");
	if (number<0)
	{
		printf("%c\n", '-');
		number = -number;
	}
	printNumberN2(number);
	return 0;
}

void printNumberN2 (int n)
{
	if (n!=0)
	{
		printNumberN2(n/10);
		printf("%d\n", n % 10);
	}
}

void printNumberN1 (int n)
{
	if (n<0)
	{
		printf("%c\n", '-');
		n = -n;
	}
	int divider = 1;
	while (n / divider >=10)
	{
		divider *= 10;
	}
	do
	{
		printf("%d\n",n / divider);
		n = n % divider;
		divider /= 10;
	} while(n!=0);
	while (divider)
	{
		printf("%d\n", 0);
		divider /= 10;
	}
}
