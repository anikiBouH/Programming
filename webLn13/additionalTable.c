#include <stdio.h>
void printAdditionalTable(int s);

int main()
{


	int i = 0, j = 1, k = -1;
	float x=0.5, y=0.0;
	int z = x*y<i+j||k;
	printf("%d",z);
	return 0;
}

void printAdditionalTable(int s)
{
	int i,j;

	for (i=0; i<=s; i++)
	{
		for (j=i; j<=s+i; j++)
		{
			printf("%2d\t", j);
		}
		printf("\n");
	}

}
