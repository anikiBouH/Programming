#include <stdio.h>


void multiplication_table(int x, int y);
void printStars3(int stars);
void printStars31(int stars);
void printStars4(int stars);
void printMagenDavid(int stars);


int main()
{

	multiplication_table(12,13);
	printf("\n");
	printStars3(10);
	printf("\n");
	printStars31(10);
	printf("\n");
	printStars4(10);
	printf("\n");
	// минимум 3 звезды в стороне маленького треугольника
	printMagenDavid(3);
	printMagenDavid(4);
	printMagenDavid(5);
	printMagenDavid(7);
	printMagenDavid(2);

	return 0;
}
void printStars31(int stars)
{
	int i;
	int j;
	for (i=0  ; i<stars; i++)
	{
		for (j=0; j<stars; j++)
		{
			if ((j==0)||(j==stars-1)||(i==0)||(i==stars-1)||(stars-j>i))
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

void multiplication_table(int x, int y)
{
	int i,j;

		for( i = 1; i<=y; i++)
		{
			for( j = 1; j<=x; j++)
			{
				printf("%3d  x%3d=%3d\t",i,j,i*j);
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

void printStars4(int stars)
{
	int i;
	int j;
	for (i=0  ; i<stars; i++)
	{
		for (j=0; j<stars; j++)
		{
			if ((i == j)||(j==0)||(j==stars-1)||(i==0)||(i==stars-1)||(j==stars-1-i)
					||((i<stars/2-1)&&(j>i)&&(j<stars-1-i))
					||((i>stars/2-1)&&(i>stars-1-j)&&(i>j)))
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

void printMagenDavid(int stars)
{

	int i,j;
	int lenght = 6*(stars - 1);
	int height = 4*(stars - 1);
	int mid = 3*(stars - 1);
	printf("\nРазмер звезды %dx%d\n",lenght,height);
	for(i=0;i<=height;i++)
	{
		for(j=0; j<=lenght; j++)
		{
			if((i==mid-j)||(i==j-mid)||(i==stars-1)||(i==mid)||(i==stars-1+j)||(i==lenght-j+stars-1))
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
