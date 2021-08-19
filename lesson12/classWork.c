#include <stdio.h>
int reverseNumber(int number);
int hasSubNumber(int n, int sub);
int sumDigit(int n);
int isLackyTicket (int numberTicket);
int countLackyTicket ();


int main()
{
	//printf("%d\n", reverseNumber(12345678));

	int number = 34567;
	int subnumber = 45;
	if (hasSubNumber(number, subnumber))
	{
		printf("yes %d times\n", hasSubNumber(number, subnumber) );
	} else
	{
		printf("no\n");
	}

	if (isLackyTicket(555456))
	{
		printf("yes\n");
	} else
	{
		printf("no\n");
	}

	printf("%d\n", countLackyTicket());





	return 0;


}

int reverseNumber(int number)
{
	int res = 0;
	do
	{
		res = res * 10 + number % 10;
		number /= 10;
	} while (number !=0);

	return res;
}

int hasSubNumber(int n, int sub)
{
	int div = 1;
	while(sub>div)
	{
		div*=10;
	}
		printf("%d\n", div);
	do
	{
		if(n % div == sub)
		{
			return 1;
		}
		n /= 10;
	} while(n!=0);
	return 0;
}

int countasSubNumber(int n, int sub)
{
	int div = 1;
	int count = 0;
	while(sub>div)
	{
		div*=10;
	}
		printf("%d\n", div);
	do
	{
		if(n % div == sub)
		{
			count++;
		}
		n /= 10;
	} while(n!=0);
	return count;
}

int countLackyTicket ()
{
	int i; int j;
	int count = 0;
	for (i = 0; i<1000; i++)
	{
		for (j = 1; j<1000; j++){
			if (sumDigit(i) == sumDigit(j))
			{
				count++;
			}
		}
	}
	return count;
}

int isLackyTicket (int numberTicket)
{
	int div = 1000;
	if (sumDigit(numberTicket / div) == sumDigit(numberTicket % div))
	{
		return 1;
	}
	return 0;
}


int sumDigit(int n)
{
	int res = 0;
	do
	{
		res += n % 10;
		n /= 10;
	}while (n!=0);
	return res;
}
