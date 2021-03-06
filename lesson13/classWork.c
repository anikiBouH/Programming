#include <stdio.h>
void printStars1(int stars);
void printStars2(int stars);
void printStars3(int stars);
void printStars4(int stars);
void printASCII(int f, int l);
void printABC_inRows(int inRow);

int main()
{




	printStars1(10);
	printf("\n");
	printStars2(10);
	printf("\n");
	printStars3(10);
	printf("\n");
	printStars4(10);


	int first = 33;
	int last = 126;
	printf("\tprinting ASCII table from %c to %c\n", first, last);

	printASCII(first, last);

	/*
	 * for(ind=0, B=100; ind<B; ind--)
	 * update only one symbol for performing 100 iterations
	 * for(ind=0, B=100;-ind<B; ind--)
	*/
	return 0;
}

void printASCII(int f, int l)
{
	int i, count;
	for (i=f, count = 1; i<=l; i++, count++)
	{
		printf("code %d => symbol %c;\t",i,i);
		if (count % 4 == 0)
		{
					printf("\n");
		}
	}
}

void printABC_inRows(int inRow)
{
	int count;
	int ch;

	for(ch = 'A' , count = 1; ch <='Z'; ch++, count++ )
	{
		printf("%c=>%d\t",ch,ch);

		if (count % inRow == 0)
		{
			printf("\n");
		}
	}
}


void printStars1(int stars)
{
	int i;
	int j;
	for (i=0  ; i<stars; i++)
	{
		for (j=0; j<stars; j++)
		{
			if ((i == j)||(j==0)||(j==stars-1)||(i==0)||(i==stars-1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");
	}
}
void printStars2(int stars)
{
	int i;
	int j;
	for (i=0  ; i<stars; i++)
	{
		for (j=0; j<stars; j++)
		{
			if ((i == j)||(j==0)||(j==stars-1)||(i==0)||(i==stars-1)||(j==stars-1-i))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");
	}
}

void printStars3(int stars)
{
	int i;
	int j;
	for (i=0  ; i<stars; i++)
	{
		for (j=0; j<stars; j++)
		{
			if ((i == j)||(j==0)||(j==stars-1)||(i==0)||(i==stars-1)||(j<i))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");
	}
}
void printStars31(int stars)
{
	int i;
	int j;
	for (i=0  ; i<stars; i++)
	{
		for (j=0; j<stars; j++)
		{
			if ((i == j)||(j==0)||(j==stars-1)||(i==0)||(i==stars-1)||(j<i))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");
	}
}
void printStars4(int stars)
{
	int i;
	int j;
	for (i=0  ; i<stars; i++)
	{
		for (j=0; j<stars; j++)
		{
			if ((i == j)||(j==0)||(j==stars-1)||(i==0)||(i==stars-1)||(j==stars-1-i)
					||((i<stars/2-1)&&(j>i)&&(j<stars-1-i)))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");
	}
}
